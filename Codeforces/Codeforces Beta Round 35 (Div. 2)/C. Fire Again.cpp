// ﷽
// Contest: Codeforces Beta Round 35 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/35/problem/C
// Memory Limit: 64
// Time Limit: 2000
// Start: Thu 12 Sep 2024 04:21:07 PM EEST
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
  int n, m, t;
  cin >> m >> n;
  cin >> t;
  vector<pair<int, int>> v(t);
  pair<int, int> p;
  for (auto &[a, b] : v) {
    cin >> a >> b;
    p={a, b};
  }
  debug(p);
  queue<pair<int, int>> q;
  vector<vector<int> > vis(m+1,vector<int>(n+1));
  for (auto &[a, b] : v) {
    q.push({a, b});
    vis[a][b]=1;
  }

  while (!q.empty()) {
    auto &[a, b] = q.front();
    debug(a, b);
    debug(vis);
    q.pop();


    for (int d = 0; d < 4; ++d) {
      int new_col = a + dx[d];
      int new_row = b + dy[d];
      if (new_col <= m && new_row <= n && new_col>=1 && new_row>=1) {
        if (!vis[new_col][new_row]) {
          q.push({new_col, new_row});
          p = {new_col, new_row};
          vis[new_col][new_row] = 1;
        }
      }
    }
  }
  cout << p.F << " " << p.S;
}
int32_t main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}
