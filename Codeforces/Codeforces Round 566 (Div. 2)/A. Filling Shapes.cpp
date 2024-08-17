// ﷽
// Contest: Codeforces Round 566 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1182/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 06 May 2024 12:07:39 AM EEST
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
  int n;
  cin>>n;

  int dp[n+2]={};
  dp[0]=1;
  for(int i=2;i<n+2;)
  {
    dp[i]=2*dp[i-2];
    i+=2;
  }
  cout<<dp[n];


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
