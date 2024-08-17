// ﷽
// Contest: Educational Codeforces Round 164 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1954/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 12 Apr 2024 06:01:30 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstddef>
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-zb
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 < s2) {
    swap(s1, s2);
  }
  string st1 = s1, st2 = s2;

  for (size_t i = s1.size() - 1; i > 0; i--) {
    swap(st1[i], st2[i]);
    if (st1 < s1 && st1 > st2) {
      swap(s1[i], s2[i]);
    } else {
      swap(st1[i], st2[i]);
    }
  }
  cout << s1 << "\n";
  cout << s2 << "\n";
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
