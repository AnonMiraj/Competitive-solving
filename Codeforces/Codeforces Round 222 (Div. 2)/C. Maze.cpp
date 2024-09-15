// ﷽
// Contest: Codeforces Round 222 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/378/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 05 Sep 2024 10:18:05 AM EEST
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
  int n, m, k;
  cin >> n >> m >> k;
  int s = 0;
  vector<string> v(n, string(m, ' '));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> v[i][j];
      if (v[i][j] == '.') s++;
    }
  }
  queue<pair<int, int>> q;
  pair<int, int> p;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == '.') {
        p = {i, j};
        break;
      }
    }
  }
  q.push(p);
  int tar = 1;

  v[p.F][p.S] = 'S';
  debug(s);
  debug(k);
  while (!q.empty() && tar != s - k) {
    pair<int, int> u = q.front();

    q.pop();
    for (int i = 0; i < 4; i++) {
      int y = u.F + dy[i];
      int x = u.S + dx[i];
      if (unsigned(y) < n && unsigned(x) < m && v[y][x] == '.') {
        v[y][x] = 'S';
        tar++;
        if (tar == s - k) break;
        q.push({y, x});
      }
    }
  }
  debug(tar);
  debug(s - k);
  debug(v);
  int w = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == '.') v[i][j] = 'X';
      if (v[i][j] == 'S') v[i][j] = '.', w++;
      cout << v[i][j];
    }
    cout << "\n";
  }
  debug(w);
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
