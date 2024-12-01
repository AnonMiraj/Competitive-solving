// ﷽
// Contest: Codeforces Round 978 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2022/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 13 Oct 2024 10:37:48 PM EEST
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
  int n, r;
  cin >> n >> r;
  int ones = 0;

  int v;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> v;
    ones += v & 1;
    v -= v & 1;
    ans += v;
  }
  debug(ans);

  debug(r -= ans / 2);
  debug(ones / 2);
  if (ones < r) r = ones;

  cout << ans + (r - ones / 2.f) * 2 << "\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
