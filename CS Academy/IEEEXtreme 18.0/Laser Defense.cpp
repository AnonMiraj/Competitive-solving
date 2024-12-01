// ﷽
// Contest: IEEEXtreme 18.0
//
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/laser-defense/
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 26 Oct 2024 07:05:34 AM EEST
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

void solve() {
  int L;
  cin >> L;
  int n, m;
  cin >> n >> m;
  int l = 0;
  int r = 0;
  vector<int> au;

  int res = n + 1;
  char t;
  int d;
  for (int i = 0; i < n; i++) {
    cin >> t >> d;
    if (t == 'R')
      r++;
    else
      au.push_back(d);
  }
  sort(all(au));

  for (int i = 0; i < m; i++) {
    cin >> t >> d;
    if (t == 'L')
      res += n + 1;
    else {
      int uu =au.size()-( upper_bound(au.begin(), au.end(), d) - au.begin());
      debug(au);
      debug(d);
      debug(uu);

      res += r + 1 + uu;
    }
  }
  cout << res;
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
