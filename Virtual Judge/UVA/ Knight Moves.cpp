
#include <iostream>
#include <map>
#include <queue>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// Define the dimensions of the chessboard
const int N = 8;
const int M = 8;

// Define the possible moves of a knight
const int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
const int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

// Function to check if a cell (x, y) is valid on the chessboard
bool isValid(int x, int y) { return (x >= 0 && x < N && y >= 0 && y < M); }

// Function to find the shortest path between two squares using BFS
int shortestPath(string start, string end) {
  // Convert square strings to coordinates
  int start_x = start[0] - 'a';
  int start_y = start[1] - '1';
  int end_x = end[0] - 'a';
  int end_y = end[1] - '1';

  // Create a visited array to mark visited cells
  vector<vector<bool>> visited(N, vector<bool>(M, false));

  // Create a queue for BFS
  queue<pair<int, int>> q;

  // Mark the start cell as visited and enqueue it
  visited[start_x][start_y] = true;
  q.push({start_x, start_y});

  // Initialize distance array
  vector<vector<int>> distance(N, vector<int>(M, 0));

  // Run BFS
  while (!q.empty()) {
    // Get the front cell from the queue
    auto cell = q.front();
    q.pop();

    int x = cell.first;
    int y = cell.second;

    // If we have reached the end cell, return its distance
    if (x == end_x && y == end_y)
      return distance[x][y];

    // Explore all 8 possible moves from the current cell
    for (int i = 0; i < 8; ++i) {
      int new_x = x + dx[i];
      int new_y = y + dy[i];

      // Check if the new cell is valid and not visited yet
      if (isValid(new_x, new_y) && !visited[new_x][new_y]) {
        // Mark the new cell as visited, update distance, and enqueue it
        visited[new_x][new_y] = true;
        distance[new_x][new_y] = distance[x][y] + 1;
        q.push({new_x, new_y});
      }
    }
  }

  // If the end cell is not reachable, return -1
  return -1;
}

int main() {
  string start, end;
  while (cin >> start >> end) {
    int moves = shortestPath(start, end);
    cout << "To get from " << start << " to " << end << " takes " << moves
         << " knight moves." << endl;
  }
  return 0;
}
