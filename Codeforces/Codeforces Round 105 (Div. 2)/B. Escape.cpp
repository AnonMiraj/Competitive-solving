// ﷽
// Contest: Codeforces Round 105 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/148/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 07 Apr 2024 09:57:41 PM EET
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

int vp, vd, t, f, c;
bool can(int ans) {
  if (t * (1)) {
  }
}
void solve() {
  cin >> vp >> vd >> t >> f >> c;
  int l = 0, r = 10000;
  if (vp > vd) {
    cout << 0;
  }
  int mid;
  while (l < r) {
    mid = (l + r) / 2;
    if (can(mid)) {
      r = mid + 1;
    } else {
      l = mid;
    }
  }
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
