// ﷽
// Contest: Codeforces Round 295 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/520/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 04 Apr 2024 10:56:12 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
int n, m, c = 0;
  cin >> n >> m;
  while (m > n) {
    if (m % 2 == 0)
      m /= 2;
    else
      m++;
    c++;
  }
  cout << c+abs(n-m);
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
