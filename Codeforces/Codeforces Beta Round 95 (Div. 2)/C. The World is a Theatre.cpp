// ﷽
// Contest: Codeforces Beta Round 95 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/131/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 09 Nov 2024 11:00:58 AM EET
// Reading Time : 2
// Thinking Time : 4
// Coding Time : 5
// Debug Time :
// Submit Count : 1
// Problem Level : 3
// Category : math, combinatorics
// Comments : i guess pretty standard combinatorics
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

int C[36][36];

void buildPascal() {
  for (int i = 0; i <= 30; i++)
    for (int j = 0; j <= i; j++) {
      if (j == 0)
        C[i][j] = 1;
      else
        C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
    }
}
void solve() {
  buildPascal();
  int b, g, n;
  cin >> b >> g >> n;
  int total = b + g;
  int ans = 0;
  for (int i = 4; i < n; i++) {
    int gg = n - i;
    debug(i, gg);
    debug(C[b][i], C[g][gg]);
    ans += C[b][i] * C[g][gg];
  }
  cout << ans << "\n";
  debug(ans);
  // 5 2 5
  // 4 1  * 4
  //
  //
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
