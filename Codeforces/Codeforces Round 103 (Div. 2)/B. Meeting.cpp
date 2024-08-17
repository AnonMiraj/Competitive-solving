// ﷽
// Contest: Codeforces Round 103 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/144/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 25 Apr 2024 01:24:12 PM EET
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
  int xa, xb, ya, yb;
  cin >> xa >> ya >> xb >> yb;
  if (xa > xb) {
    swap(xa, xb);
  }
  if (ya > yb) {
    swap(ya, yb);
  }
  int blan = 0;
  int ax[1001], ay[1001], ar[1001];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> ax[i] >> ay[i] >> ar[i];
  }
  int flag = 0;
  for (int i = xa; i <= xb; i++) {
    for (int j = ya; j <= yb; j++) {
      if (i == xa || i == xb || j == ya || j == yb) {

        flag = 0;
        for (int k = 0; k < n; k++) {
          if ((ax[k] - i) * (ax[k] - i) + (ay[k] - j) * (ay[k] - j) <=
              ar[k] * ar[k]) {
            flag = 1;
          }
        }
        if (!flag) {
          blan++;
        }
      }
    }
  }
  cout << blan;
  debug(xa, ya, xb, yb);
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
