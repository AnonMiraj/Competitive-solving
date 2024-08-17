// ﷽
// Contest: Educational Codeforces Round 73 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1221/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 03 Apr 2024 12:44:36 AM EET
// Reading Time :2
// Thinking Time :2 
// Coding Time :5
// Comments :very nice question with a nice sol
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
  int a, b, c,an=0;
  cin >> a >> b >> c;
  an=(a+b+c)/3;
  c += abs(a - b);
  cout<<min({a,b,an})<<"\n";
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
