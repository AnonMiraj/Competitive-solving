// ﷽
// Contest: Codeforces Round 153 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/252/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 18 Apr 2024 07:39:33 PM EET
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
int n;
int arr[109];
int v(int ind) {
  if (ind>=n) {
    return 0;
  }
  return max({v(ind+1),arr[ind]^v(ind+1),arr[ind]});
}

void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout<<v(0);
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
    solve();
  return 0;
}
