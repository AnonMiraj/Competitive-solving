// ﷽
// Contest: Codeforces Beta Round 73 (Div. 2 Only)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/88/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 29 Nov 2024 02:19:34 PM EET
// Reading Time : 5
// Thinking Time : 25
// Coding Time : 30
// Debug Time :
// Submit Count : 3
// Problem Level : 3
// Category : math
// Comments : still dont have an idea how to solve it but i want to try something , i have no idea why this work
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
  int l = lcm(a, b);
  int mi = min(a, b), ma = a + b - mi;
  if ((ma / gcd(a, b) - mi / gcd(a, b) == 1) || mi * 2 == ma) {
    cout << "Equal\n";
    return;
  }
  if (mi == a) {
    cout << "Dasha\n";
    return;
  }

  if (mi == b) {
    cout << "Masha\n";
    return;
  }
  vector<int> v(l);
  int d = 0, m = 0;
  for (int i = 1; i <= l; i++) {
    if (i % a == 0) v[i - 1] += 1;
    if (i % b == 0) v[i - 1] += 2;
  }
  int last = -1;
  for (int i = l - 2; i >= 0; i--) {
    if (v[i]) last = v[i];
    if (last == 1) d++;
    if (last == 2) m++;
  }

  if (d > m)
    m++;
  else
    d++;
  for (int i = l - 2; i >= 0; i--) {
    if (v[i]) break;

    if (d > m)
      m++;
    else
      d++;
  }
  debug(v);
  debug(d, m);
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
