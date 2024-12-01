// ﷽
// Contest: UVA
//
// Judge: Virtual Judge
// URL: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1753
// Memory Limit: 1024
// Time Limit: 3000
// Start: Fri 29 Nov 2024 03:51:08 PM EET
// Reading Time : 2
// Thinking Time : 2
// Coding Time : 2
// Debug Time :
// Submit Count : 1
// Problem Level : 1
// Category : math
// Comments : very easy i guess
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
  int ab, a_b;
  cin >> ab >> a_b;
  int b = (ab - a_b) / 2;
  int a = ab - b;
  if (a + b == ab && a - b == a_b&&a>=0&&b>=0)
    cout << a << " " << b << "\n";
  else
    cout << "impossible\n";
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
