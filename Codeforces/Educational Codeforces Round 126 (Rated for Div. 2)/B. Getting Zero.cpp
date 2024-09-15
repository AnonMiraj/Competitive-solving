// ﷽
// Contest: Educational Codeforces Round 126 (Rated for Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1661/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 06 Sep 2024 07:59:19 AM EEST
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
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  queue<int> q, back;
  vector<int> vis(32768 + 9, -1);

  int cnt = 0;
  vis[0]=0;
  q.push(0);

  while (!q.empty() && cnt != 32768) {
    auto u = q.front();
    q.pop();
    int p1 = (u + 32768 - 1) % 32768;
    if (vis[p1] == -1) {
      vis[p1] = vis[u] + 1;
      q.push(p1);
    }
    if (!(u & 1)) {
      int p2 = u / 2;
      if (vis[p2] == -1) {
        vis[p2] = vis[u] + 1;
        q.push(p2);
      }

      p2 += 32768 / 2;
      if (vis[p2] == -1) {
        vis[p2] = vis[u] + 1;
        q.push(p2);
      }
    }
  }
  for (auto i : v) {
    cout << vis[i] << " ";
  }
  debug(vis, cnt);
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
