// ﷽
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 30 Mar 2024 08:21:50 AM EET
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
  int a, b, c, l = 1, h = -1, k = 0;
  cin >> a >> b >> c;
  if (c != a + 1) {
    cout << -1 << '\n';
    return;
  }
  if (a + b + c == 1) {
    cout << 0 << '\n';
    return;
  }
  int curr = 1, next = 0, res = 1;
  for (int i = 0; i < a + b; i++) {
    if (!curr) {
      swap(next, curr);
      res++;
    }
    curr--;
    next++;
    if (i < a) {
      next++;
    }
  }
  cout << res << '\n';
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
