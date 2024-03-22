// ﷽
// Contest: Codeforces Round 935 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1945/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 19 Mar 2024 10:00:18 PM EET
// Reading Time : 3.5 
// Thinking Time :  19 +3 
// Coding Time : 10 + 2
// Comments : wa test2 i am stupid DONT OVER THINK
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
  
  int a,b,m;
  cin>>a>>b>>m;
  cout<<(a+m)/a+((b+m)/b)<<"\n";
}
int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
