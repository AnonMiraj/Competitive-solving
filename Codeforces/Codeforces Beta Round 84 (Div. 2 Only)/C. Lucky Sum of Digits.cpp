// ﷽
// Contest: Codeforces Beta Round 84 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/110/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 20 Apr 2024 07:12:53 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <functional>
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
  int n;
  cin >> n;
  int sev = n / 7;
  int four = n % 7;
  while (sev > 0 && four % 4) {
    sev--;
    four += 7;
  }

  if (four % 4) {
    cout << -1;
    return;
  }
  four /= 4;
  debug(sev, four);
  while (four--) {
    cout << 4;
  }

  while (sev--) {
    cout << 7;
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
