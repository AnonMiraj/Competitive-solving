// ﷽
// Contest: Codeforces Round 984 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2036/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 02 Nov 2024 05:59:29 PM EET
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

/*#define MUTLI_CASE*/
void solve() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<vector<int>> v(m, vector<int>());
  int t;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> t;
      v[j].push_back(t);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 1; j < n; j++) {
      v[i][j] |= v[i][j - 1];
    }
  }
  while (q--) {
    int m;
    cin >> m;
    int low = 0, high = n;
    while (m--) {
      int i;
      char c;
      int x;
      cin >> i >> c >> x;
      --i;
      if (c == '<') {
        high = min(
            high, (int)(lower_bound(v[i].begin(), v[i].end(), x) - v[i].begin()));
      } else {
        low = max(low,
                  (int)(upper_bound(v[i].begin(), v[i].end(), x) - v[i].begin()));
      }
    }
    cout << (low >= high ? -1 : low + 1) << '\n';
  }
  debug(v);
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
