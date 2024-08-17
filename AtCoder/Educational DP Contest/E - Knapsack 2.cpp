// ﷽
// Contest: Educational DP Contest
// Judge: AtCoder
// URL: https://atcoder.jp/contests/dp/tasks/dp_e
// Memory Limit: 1024
// Time Limit: 2000
// Start: Tue 09 Jul 2024 02:11:12 AM EEST
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

void solve() {

  vector<pair<int, int>> v;
  int n, w;
  cin >> n >> w;

  v = vector<pair<int, int>>(n);
  int maxv = 0;
  for (auto &[a, b] : v) {
    cin >> a >> b;
    maxv += b;
  }
  maxv=n*1000;
  vector<int> dp(maxv + 1, LLONG_MAX);
  dp[0] = 0;

  for (int i = 0; i < n; i++) {
    auto &[a, b] = v[i];
    for (int j = maxv; j >= b; j--) {

      if (dp[j - b] != LLONG_MAX) 
        dp[j] = min(dp[j - b] + a, dp[j]);
    }
  }

  int ans = -1;
  for (int j = maxv; j >= 0; j--) {
    if (dp[j] <= w) {
      ans = j;
      break;
    }
  }
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
