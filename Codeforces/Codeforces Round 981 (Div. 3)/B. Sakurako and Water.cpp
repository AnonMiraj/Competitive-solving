// ﷽
// Contest: Codeforces Round 981 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2033/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 24 Oct 2024 05:40:30 PM EEST
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
  vector<vector<int>> v(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }
  debug(v);
  int ans = 0;

  int t = 0;
  for (int k = 0; k < n; k++) {
    for (int i = 0, j = k; j < n; i++, j++) {
      t = min(v[i][j], t);
    }
    ans += abs(t);
    t = 0;
  }

  for (int k = 1; k < n; k++) {
    for (int i = k, j = 0; i < n; i++, j++) {
      t = min(v[i][j], t);
    }
    ans += abs(t);
    t = 0;
  }

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
  while (n--) solve();
  return 0;
}
