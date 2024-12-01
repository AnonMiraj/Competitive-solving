// ﷽
// Contest: UVA
//
// Judge: Virtual Judge
// URL: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1784
// Memory Limit: 1024
// Time Limit: 3000
// Start: Thu 07 Nov 2024 08:41:12 PM EET
// Reading Time : 2
// Thinking Time : 12
// Coding Time : 2
// Debug Time :
// Submit Count : 1
// Problem Level : 5
// Category : graphs, math
// Comments : spcial case of graphs i dont know how to figure this on my own ?
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
int MOD = 2000000011;
int fast_power(int a, int b, int mod) {
  int res = 1;
  while (b) {
    if (b & 1) res = res * a % mod;
    a = a * a % mod;
    b >>= 1;
  }
  return res;
}
void solve(int cse) {
  int n;

  cin >> n;
  cout << "Case #" << cse << ": " << fast_power(n, max(n - 2, 0LL), MOD)
       << "\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

  cin >> n;
  for (int i = 0; i < n; i++) {
    solve(i + 1);
  }
  return 0;
}
