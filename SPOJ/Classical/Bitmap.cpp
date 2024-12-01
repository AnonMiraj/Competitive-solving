// ﷽
// Contest: Classical
//
// Judge: SPOJ
// URL: https://www.spoj.com/problems/BITMAP/
// Memory Limit: 1536
// Time Limit: 4000
// Start: Thu 07 Nov 2024 06:10:38 PM EET
// Reading Time : 1
// Thinking Time : 5
// Coding Time : 20
// Debug Time :
// Submit Count : 1
// Problem Level : 3
// Category : bfs , brute force
// Comments : i dont like this problem
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
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  vector<pair<int, int>> whi;
  char tt;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> tt;
      v[i][j] = tt == '1' ? 0 : INT_MAX;
      if (tt == '1') whi.push_back({i, j});
    }
  }
  debug(whi);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      pair<int, int> p = {i, j};
      if (v[i][j] == 0) {
        cout << v[i][j] << " ";

        continue;
      }
      for (auto k : whi) {
        v[i][j] = min(v[i][j], abs(k.F - i) + abs(k.S - j));
      }
      cout << v[i][j] << " ";
    }
    cout << "\n";
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
