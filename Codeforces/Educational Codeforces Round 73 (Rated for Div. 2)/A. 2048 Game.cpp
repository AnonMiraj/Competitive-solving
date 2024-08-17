// ﷽
// Contest: Educational Codeforces Round 73 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1221/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 03 Apr 2024 12:13:46 AM EET
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
  int n, ans = 0, t;
  cin >> n;
  // 1 2 4 8 16 32 64 128 256 512 1024 2048;

  for (size_t i = 0; i < n; i++) {
    cin >> t;
    if (t == 2048) {
      cout << "YES\n";
      return;
    }
    if (t < 2048) {
      ans+=t;
    }
  }

  if (ans>=2048) {
    cout << "YES\n";
    return;
  }

  cout << "NO\n";
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
