// ﷽
// Contest: Educational DP Contest
// Judge: AtCoder
// URL: https://atcoder.jp/contests/dp/tasks/dp_f
// Memory Limit: 1024
// Time Limit: 2000
// Start: Tue 09 Jul 2024 05:23:31 PM EEST
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
  string a, b;
  cin >> a >> b;
  int m = a.size(), n = b.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) {
      dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

      if (a[j - 1] == b[i - 1])
        dp[i][j] = max((dp[i - 1][j - 1]) + 1, dp[i][j]);
    }
  string ans = "";
  int i = n, j = m;

  while (i && j) {

    if (b[i-1] == a[j-1])
    {
      ans = b[i - 1] + ans, j--, i--;
      continue;
    }
    if (dp[i-1][j] < dp[i][j - 1])
      j--;
    else 
      i--;
  }
  debug(a);
  debug(b);
  cout << ans;
  for (int i = 0; i <= n; i++)
    debug(dp[i]);
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
