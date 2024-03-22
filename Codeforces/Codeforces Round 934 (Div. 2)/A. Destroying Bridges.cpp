// ﷽
// Contest: Codeforces Round 934 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1944/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 16 Mar 2024 04:44:55 PM EET
// Reading Time : 
// Thinking Time : 
// Coding Time : 15
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
  int n,k;
  cout <<((cin>>n>>k)&&n-1<=k? 1 : n)<<"\n";


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
