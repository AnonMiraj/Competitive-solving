// ﷽
// Contest: Codeforces Round 218 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/371/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 26 Sep 2024 03:41:06 AM EEST
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
  int a, b;
  cin >> a >> b;
  vector<int> va(3);
  vector<int> vb(3);

  for (int i = a; i % 2 == 0 && i; i /= 2) {
    va[0]++;
  }
  for (int i = a; i % 3 == 0 && i; i /= 3) {
    va[1]++;
  }
  for (int i = a; i % 5 == 0 && i; i /= 5) {
    va[2]++;
  }
  for (int i = b; i % 2 == 0 && i; i /= 2) {
    vb[0]++;
  }
  for (int i = b; i % 3 == 0 && i; i /= 3) {
    vb[1]++;
  }
  for (int i = b; i % 5 == 0 && i; i /= 5) {
    vb[2]++;
  }

  a /= pow(2, va[0]);
  a /= pow(3, va[1]);
  a /= pow(5, va[2]);

  b /= pow(2, vb[0]);
  b /= pow(3, vb[1]);
  b /= pow(5, vb[2]);

  if (a != b) {
    cout << -1;

  } else
    cout << abs(vb[0] - va[0]) + abs(vb[1] - va[1]) + abs(vb[2] - va[2]);
  debug(va);
  debug(vb);
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
