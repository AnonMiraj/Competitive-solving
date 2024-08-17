// ﷽
// Contest: Codeforces Round 939 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1956/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 13 Apr 2024 05:49:34 PM EET
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
#include <iterator>
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
  int summ = 0;

  for (size_t i = 1; i <= n; i++) {
    summ += i * (2 * i - 1);
  }
  cout << summ << " " << 2 * n << "\n";
  for (int q = 0; q < n; q++) {
    cout << 1 << " " << q + 1 << " ";
    for (int j = 0; j < n; j++) {
      cout << n- j  << " ";
    }
    cout << "\n";

    cout << 2 << " " << q + 1 << " ";
    for (int j = 0; j < n; j++) {
      cout << n- j  << " ";
    }
    cout << "\n";
  }
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
