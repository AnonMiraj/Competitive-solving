// ﷽
// Contest: UVA
//
// Judge: Virtual Judge
// URL:
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1410
// Memory Limit: 1024
// Time Limit: 3000
// Start: Fri 29 Nov 2024 03:37:38 PM EET
// Reading Time : 2
// Thinking Time : 2
// Coding Time : 2
// Debug Time :
// Submit Count : 1
// Problem Level : 2
// Category : math ,bitwise
// Comments : just a simple xor
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
  while (cin >> a >> b) {
    int c = 0;
    for (int i = 0; i < 32; i++) {
      c |= (a >> i & 1 ^ b >> i & 1) << i;
    }
    cout<<c<<"\n";
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
