// ﷽
// Contest: Codeforces Round 944 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1971/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 10 May 2024 05:36:27 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

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

  int x,y;
  cin>>x>>y;
  cout<<min(x,y)<<" "<<max(y,x)<<"\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  ci >>n;
  while (n--)
    solve();
  return 0;
}
