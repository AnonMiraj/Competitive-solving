// ﷽
// Contest: Codeforces Round 179 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/296/problem/C
// Memory Limit: 256
// Time Limit: 1500
// Start: Sat 09 Nov 2024 10:58:24 AM EET
// Reading Time : 0
// Thinking Time : 0
// Coding Time : 0
// Debug Time :  0
// Submit Count : 1
// Problem Level :  3
// Category :  prefix 
// Comments : solved it before just prefix sum
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

}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin>>n;
#endif
  while (n--) solve();
  return 0;
}
