// ﷽
// Contest: Codeforces Round 936 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1946/problem/C
// Memory Limit: 512
// Time Limit: 3000
// Start: Fri 22 Mar 2024 05:15:37 PM EET
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

int n, k, ans = 0;
vector<vector<int>> adj;
int dfs(int v, int p, int x) {
  // process node s
  int bruh = 1;
  for (auto u : adj[v]) {
    if (u != p) {
      bruh += dfs(u, v, x);
    }
  }
  if (bruh >= x) {
    ans++;
    return 0;
  }
  return bruh;
}
int wtf(int x) {
  ans = 0;

  if (dfs(0, -1, x) >= x)
    ans++;
  return ans;
}
void solve() {
  cin >> n >> k;
  int a, b;
  adj = vector<vector<int>>(n + 1);
  for (int i = 1; i < n; i++) {
    cin >> a >> b;
    a--;
    b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int l = 1, r = n + 1;
  while (l+1 < r) {
    int mid = (l + r) / 2;
    ans = 0;
    if (wtf(mid) > k) {
      l = mid;

    } else {
      r = mid;
    }
  }

  cout << l << "\n";
  adj.clear();
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
