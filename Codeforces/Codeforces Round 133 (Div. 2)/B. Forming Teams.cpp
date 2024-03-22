// ﷽
// Contest: Codeforces Round 133 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/216/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 28 Jan 2024 01:06:10 PM UTC
//
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
#include <vector>
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;
vector<vector<int>> graph;
vector<int> vis;
// Find path or cycle
// We can use Find-Union Data structure to do that too
bool dfs(int cur_node, int par_node, int &nodes_cnt) {
  if (vis[cur_node])
    return 1;

  vis[cur_node] = 1;

  for (auto child_node : graph[cur_node])
    if (child_node != par_node) {
      ++nodes_cnt;

      if (dfs(child_node, cur_node, nodes_cnt) == 1)
        return 1;
    }
  return 0;
}
void solve() {
  int n, m, ans = 0;
  cin >> n >> m;

  graph = vector<vector<int>>(n);
  vis = vector<int>(n);
  int a, b;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    a--, b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }
  for (size_t i = 0; i < n; i++) {
    if (!vis[i]) {
      int cnt = 0;
      if (dfs(i, -1, cnt)) {
        ans += (cnt % 2 == 1);
      }
    }
  }
  if ((n - ans) % 2 == 1)
    ans++;

  cout << ans;
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
