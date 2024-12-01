// ﷽
// Contest: Rayan Programming Contest 2024 - Selection (Codeforces Round 989,
// Div. 1 + Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2034/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 30 Nov 2024 04:37:10 PM EET
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
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
void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  string s;
  cin >> s;
  int cnt = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {

    debug(cnt);
    if (s[i] == '0')
      cnt++;
    else
      cnt = 0;

    if (cnt == m) {
      ans++;
      cnt = k - 1;

      s[i] = '1';
      while (cnt != 0 && i != n) {
        i++;
        s[i] = '1';
        cnt--;
      }
      cnt = 0;
      continue;
    }
  }
  debug(s);
  cout << ans << "\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--)
    solve();
  return 0;
}
