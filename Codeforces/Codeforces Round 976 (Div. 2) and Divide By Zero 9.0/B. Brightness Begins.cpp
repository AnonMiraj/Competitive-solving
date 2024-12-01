// ﷽
// Contest: Codeforces Round 976 (Div. 2) and Divide By Zero 9.0
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2020/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 30 Sep 2024 07:07:46 PM EEST
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

map<int, int> m;
void bf(int n) {
  vector<bool> v(n, 1);
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n; j++) {
      if ((j + 1) % i == 0) v[j] = v[j] ^ 1;
    }
    /*debug(v);*/
  }

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cnt += v[i];
  }
  if (m[cnt] == 0) {
    m[cnt] = n;
  }
  m[cnt] = min(n, m[cnt]);

  /*debug(n, cnt);*/
  if (cnt + sqrt(cnt) != n) {
    /*debug("FUUUCK");*/
    /*exit(0);*/
  }
}
void solve() {
  int n;
  cin >> n;
    cout << (n+(int)(sqrtll(n) + 0.5)) << "\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
