// ﷽
// Contest: Codeforces Round 981 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2033/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 24 Oct 2024 05:35:18 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Debug Time :
// Submit Count :
// Problem Level :
// Category :
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

#define MUTLI_CASE
void solve() {
  int n;
  cin >> n;
  int p = 0;
  int x = 1;
  while (true) {
    p -= x;
    if (abs(p) > n) {
      cout<< "Sakurako\n";
      return;
    }

    x += 2;

    p += x;
    if (abs(p) > n) {
      cout<< "Kosuke\n";
      return;
    }

    x += 2;
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
