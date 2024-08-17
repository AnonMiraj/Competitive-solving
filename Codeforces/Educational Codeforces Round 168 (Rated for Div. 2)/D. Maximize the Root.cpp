// ﷽
// Contest: Educational Codeforces Round 168 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1997/problem/D
// Memory Limit: 256
// Time Limit: 3000
// Start: Tue 30 Jul 2024 06:54:16 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <bits/stdc++.h>

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
int n;
vector<int> arr;
vector<vector<int>> adj;

int dfsmin(int p) {

  if (adj[p].empty()) {
    return arr[p];
  }
  int miv = INT_MAX;
  for (auto a : adj[p]) {
    miv = min(miv, dfsmin(a));
  }
  if (p == 0) {
    return miv + arr[p];
  } else if (miv > arr[p])
    return (miv + arr[p]) / 2;
  return miv;
}
void solve() {
  cin >> n;
  arr = vector<int>(n);
  adj = vector<vector<int>>(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  debug(arr);
  int t;
  for (int i = 1; i < n; i++) {
    cin >> t;
    adj[t - 1].push_back(i);
  }

  int x = dfsmin(0);
  cout << x << endl;
  debug(adj);
  debug(x);
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
