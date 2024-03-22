// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1668
// Memory Limit: 512
// Time Limit: 1000
// Start: Fri 22 Mar 2024 12:22:39 AM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <variant>
#include <vector>
#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

int n, m;
vector<vector<int>> d;
vector<int> visited;
vector<int> color;

bool isBipartite = true;

void dfs(int node, int col) {
  if (visited[node]) {
    return;
  }
  visited[node] = 1;
  color[node] = col;
  for (auto neighbor : d[node]) {
    dfs(neighbor, 3 ^ col);
    if (color[neighbor] == col) {
      isBipartite = false;
      return;
    }
  }
}

void solve() {
  cin >> n >> m;
  d.resize(n + 1);
  visited.assign(n + 1, 0);
  color.assign(n + 1, 0);

  int a, b;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    d[a].push_back(b);
    d[b].push_back(a);
  }

  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      dfs(i, 1);
    }
  }

  if (!isBipartite) {
    cout << "IMPOSSIBLE";
    return;
  }
  for (int i = 1; i <= n; i++) {
    cout << color[i] << " ";
  }
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
