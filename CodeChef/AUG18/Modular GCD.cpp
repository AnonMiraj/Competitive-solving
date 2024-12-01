// ﷽
// Contest: AUG18
//
// Judge: CodeChef
// URL: https://www.codechef.com/problems/GCDMOD
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 07 Nov 2024 07:51:05 PM EET
// Reading Time : 1
// Thinking Time : 1
// Coding Time : 5
// Debug Time : 25
// Submit Count : 10
// Problem Level : 1
// Category : math , stupid
// Comments : wtf is wrong with this problem
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

using u128 = __uint128_t;
using namespace std;

#define MUTLI_CASE
int MOD = 1e9 + 7;
int fast_power(int a, int b, int mod) {
  u128 res = 1;
  a %= mod;
  while (b) {
    if (b & 1) res = ((u128)res * a) % mod;
    a = (u128)a * a % mod;
    b >>= (u128)1;
  }
  return res;
}
void solve() {
  int a, b, n;
  cin >> a >> b >> n;
  int c = abs(a - b);
  if (!c) {
    cout << (fast_power(a, n, MOD) + fast_power(b, n, MOD)) % MOD << "\n";
    return;
  }

  int aa = fast_power(a, n, c)o
  int bb = fast_power(b, n, c);
  cout << gcd((aa + bb), c) % MOD << "\n";
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
