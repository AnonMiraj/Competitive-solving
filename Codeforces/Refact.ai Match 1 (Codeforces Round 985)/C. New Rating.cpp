// ﷽
// Contest: Refact.ai Match 1 (Codeforces Round 985)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2029/problem/C
// Memory Limit: 512
// Time Limit: 2000
// Start: Sat 09 Nov 2024 04:48:02 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Debug Time :
// Submit Count :
// Problem Level :
// Category :
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
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

#define MUTLI_CASE

int n;

vector<int> v;
vector<int> dp;
// take all
// take out some in the middle
// take suffix
int f(int x, int i) { return i + x > i - x < i; }
void solve() {
  cin >> n;
  v = vector<int>(n);
  dp = vector<int>(3);
  for (auto &i : v) {
    cin >> i;
  }
  dp[0] = 0;
  dp[1] = -1;
  dp[2] = -1;
  int x = 0;
  for (auto &i : v) {
    dp[2] = max(f(x, dp[1]), f(x, dp[2]));
    dp[1] = max(dp[0], dp[1]);
    dp[0] = f(i, dp[0]);
  }
  cout << max(dp[1], dp[2]) << "\n";
  debug();
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--) solve();
  return 0;
}
