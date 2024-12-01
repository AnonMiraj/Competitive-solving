// ﷽
// Contest: Codeforces Round 983 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2032/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 01 Nov 2024 05:48:49 PM EET
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
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(all(v));
  debug(v);
  int ans = -1;

  for (int i = 0; i < n - 1; i++) {
    debug(i, v[i]);
    auto aa = lower_bound(all(v), v[i] + v[i + 1]);

      debug(*aa);
    ans = max(ans, (int)(aa - (v.begin() + i)));
  }
  debug(ans);
  if (ans == -1) ans = n;
  cout << n - ans << "\n";
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
