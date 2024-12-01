// ﷽
// Contest: Codeforces Round 146 (Div. 1)
//
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/235/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 23 Sep 2024 07:12:02 PM EEST
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

void solve() {
  int n;
  cin >> n;
  int ans = -1;
  if (n == 1)
    cout << 1;
  else if (n == 2)
    cout << 2;
  else if (n == 3)
    cout << 6;
  else {
    for (int i = n; i >= max(n - 100, 0LL); i--) {
      for (int a = i - 1; a >= max(n - 100, 0LL); a--) {
        for (int b = a - 1; b >= max(n - 100, 0LL); b--) {
          ans = max(ans, lcm(i, lcm(b, a)));
        }
      }
    }
    cout << ans;
  }
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}
