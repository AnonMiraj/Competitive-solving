// ﷽
// Contest: UVA
//
// Judge: Virtual Judge
// URL:
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1658
// Memory Limit: 1024
// Time Limit: 3000
// Start: Thu 07 Nov 2024 05:37:31 PM EET
// Reading Time : 3
// Thinking Time : 2
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

void solve() {
  int n, t;
  while (cin >> n >> t && n) {
    vector<int> v(n);
    int lc;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      lc = lcm(v[i], lc);
    }
    sort(all(v));
    debug(v);
    debug(lc);

    while (t--) {
      int k;
      cin >> k;
      int ma = lc * ((k / lc) + (k%lc!=0)), mi = lc * (k / lc);
      cout<<mi<<" "<<ma<<"\n";
    }
  }
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
