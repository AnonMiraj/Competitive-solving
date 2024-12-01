
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Stack {
    vector<int> bricks;
};

// Function to solve the stacking problem
void solve() {
    int N, x;
    cin >> N >> x;
    
    vector<int> lengths(N);
    for (int i = 0; i < N; ++i) {
        cin >> lengths[i];
    }
    
    // Sort lengths in descending order
    sort(lengths.rbegin(), lengths.rend());

    vector<Stack> stacks;

    for (int length : lengths) {
        bool placed = false;

        // Try to place the brick on an existing stack
        for (Stack &s : stacks) {
            // Check if the brick can be placed on top of the last brick in the stack
            if (length + x <= s.bricks.back()) {
                s.bricks.push_back(length);
                placed = true;
                break;
            }
        }

        // If not placed, create a new stack
        if (!placed) {
            Stack newStack;
            newStack.bricks.push_back(length);
            stacks.push_back(newStack);
        }
    }

    // Output the number of stacks
    cout << stacks.size() << endl;
    // Output each stack
    for (const Stack &s : stacks) {
        cout << s.bricks.size() << " ";
        for (int brick : s.bricks) {
            cout << brick << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

