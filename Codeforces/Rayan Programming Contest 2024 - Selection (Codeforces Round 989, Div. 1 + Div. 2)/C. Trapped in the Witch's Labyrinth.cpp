// ﷽
// Contest: Rayan Programming Contest 2024 - Selection (Codeforces Round 989,
// Div. 1 + Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2034/problem/C
// Memory Limit: 256
// Time Limit: 3000
// Start: Sat 30 Nov 2024 05:00:10 PM EET
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
pair<int, int> dir(int p, int y, int x) {
  if (p == 1)
    x++;
  if (p == 2)
    y--;
  if (p == 4)
    y++;
  if (p == 8)
    x--;
  return {y, x};
}
void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n + 2, vector<int>(m + 2, 15));
  char x;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> x;
      if (x == 'R')
        v[i][j] = 1;
      else if (x == 'U')
        v[i][j] = 2;
      else if (x == 'D')
        v[i][j] = 4;
      else if (x == 'L')
        v[i][j] = 8;
      else
        v[i][j] = 0;
    }
  }

  vector<vector<int>> visted = vector<vector<int>>(n + 2, vector<int>(m + 2));
  ;

  queue<pair<pair<int, int>, int>> q;

  for (int i = 1; i <= m; i++) {
    q.push({{0, i}, 15});
    visted[0][i] = 1;
    q.push({{n + 1, i}, 15});
    visted[n + 1][i] = 1;
  }

  visted[n + 1][0] = 1;
  visted[n + 1][m + 1] = 1;
  visted[0][m + 1] = 1;
  visted[0][0] = 1;
  for (int i = 1; i <= n; i++) {
    q.push({{i, 0}, 15});
    visted[i][0] = 1;
    q.push({{i, m + 1}, 15});
    visted[i][m + 1] = 1;
  }

  debug(q.size());
  debug(q);
  int cnt = 0;
  while (!q.empty()) {
    /*debug(q);*/
    auto [pos, val] = q.front();
    auto [y, x] = pos;
    q.pop();

    for (int i = 0; i < 4; ++i) {
      int newX = x + dx[i];
      int newY = y + dy[i];

      if (newX >= 1 && newX <= m && newY >= 1 && newY <= n) {

        if (!visted[newY][newX]) {
          auto lead_to = dir(v[newY][newX], newY, newX);

          if (lead_to == pos || v[newY][newX] == 15) {
            visted[newY][newX] = 1;
            v[newY][newX] = 15;
            q.push({{newY, newX}, 15});
          }
        }
      }
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (v[i][j] != 15) {
        ans++;
        if (v[i][j] == 0) {
          int cnt15 = 0;
          for (int k = 0; k < 4; ++k) {
            int newY = i + dy[k];
            int newX = j + dx[k];
            cnt15 += v[newY][newX] == 15;
          }
          debug(cnt15);
          if (cnt15 == 4)
            ans--;
        }
      }
    }
  }
  cout << ans << "\n";

  debug();
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
