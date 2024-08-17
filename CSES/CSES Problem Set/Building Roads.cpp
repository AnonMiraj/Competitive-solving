// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1666
// Memory Limit: 512
// Time Limit: 1000
// Start: Mon 25 Mar 2024 07:17:52 AM EET
// Reading Time : 2
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

vector<vector<int>> arr;
vector<int> vis;
int n, m, cnt = 0;
void dfs(int i) {
  if (vis[i]) {
    return;
  }
  vis[i] = 1;
  cnt++;
  for (auto &u : arr[i]) {
    dfs(u);
  }
}

void solve() {
  cin >> n >> m;
  arr = vector<vector<int>>(n);
  vis = vector<int>(n, 0);
  vector<pair<int, int>> ans;
  int a, b;

  while (m--) {
    cin >> a >> b;
    a--;
    b--;
    arr[a].push_back(b);
    arr[b].push_back(a);
  }
  int start = 0;
  dfs(0);
  for (int i = 1; i <= n; i++) {
    if (!vis[i-1]) {
      dfs(i - 1);
      ans.push_back({i, i + 1});
    }
  }
  cout << ans.size() << "\n";
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i].first << " ";
    cout << ans[i].second << "\n";
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
