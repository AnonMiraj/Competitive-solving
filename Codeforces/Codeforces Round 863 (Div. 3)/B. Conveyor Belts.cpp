// ﷽
// Contest: Codeforces Round 863 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1811/B
// Memory Limit: 256
// Time Limit: 3000
// Start: Wed 27 Mar 2024 05:57:16 AM EET
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
  int n, x1, x2, y1, y2;
  cin >> n >> x1 >> y1 >> x2 >> y2;

  if (x1 > n / 2) x1 = n - x1 + 1;
  if (x2 > n / 2) x2 = n - x2 + 1;
  if (y1 > n / 2) y1 = n - y1 + 1;
  if (y2 > n / 2) y2 = n - y2 + 1;

  cout << abs(min(x1, y1) - min(x2, y2)) << '\n';
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
