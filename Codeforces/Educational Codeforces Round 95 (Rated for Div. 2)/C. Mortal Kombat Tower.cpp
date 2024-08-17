// ﷽
// Contest: Educational Codeforces Round 95 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1418/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 20 May 2024 04:23:00 AM EEST
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
vector<int> a;
//int n;
//vector<int> a;
//vector<vector<int>> d;
//
//int dp(int state, int ind) {
//    if (ind >= n)
//        return 0;
//    if (d[ind][state] != INT_MAX)
//        return d[ind][state];
//
//    int x = dp(state ^ 1, ind + 1) + (a[ind] * state);
//    int y = x;
//    if (ind + 1 < n) {
//        y = dp(state ^ 1, ind + 2) + (a[ind + 1] * state) + (a[ind] * state);
//    }
//
//    d[ind][state] = min(x, y);
//    return d[ind][state];
//}
//
//void solve() {
//    cin >> n;
//    a = vector<int>(n);
//    for (int &i : a)
//        cin >> i;
//
//    d = vector<vector<int>>(n + 2, vector<int>(2, INT_MAX));
//    cout << dp(1, 0) << "\n";
//}
void solve() {
  cin >> n;
  a = vector<int>(n);
  for (int &i : a)
    cin >> i;

  vector<vector<int>> dp(n + 2, vector<int>(2, INT_MAX));

  dp[n][0] = 0;
  dp[n][1] = 0;

  for (int ind = n - 1; ind >= 0; --ind) {
    for (int state = 0; state <= 1; ++state) {
      int x = dp[ind + 1][state ^ 1] + (a[ind] * state);
      int y = x;
      if (ind + 1 < n) {
        y = dp[ind + 2][state ^ 1] + (a[ind + 1] * state) + (a[ind] * state);
      }
      dp[ind][state] = min(x, y);
    }
  }

  cout << dp[0][1] << "\n";
  //  for (int i = 0; i <= n + 2; i++)
  //    d[{i, 0}] = INT_MAX, d[{i, 1}] = INT_MAX;
  //  cout << dp(1, 0) << "\n";
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
