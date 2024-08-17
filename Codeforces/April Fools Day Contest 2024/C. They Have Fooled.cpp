// ﷽
// Contest: April Fools Day Contest 2024
// Judge: Codeforces
// URL: https://codeforces.com/contest/1952/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 01 Apr 2024 06:11:08 PM EET
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <climits>
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

  int ans = 0;
  switch (n) {
  case 0:
  case 1:
  case 8:
    ans = 10;
    break;
  case 2:
  case 7:
  case 6:
    ans = 2;
    break;
  case 9:
    ans = 0;
    break;
  case 5:
  case 3:
  case 4:
    ans = 7;
    break;
  case 10:
  case 11:
  case 12:
    ans = 0;
    break;
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
