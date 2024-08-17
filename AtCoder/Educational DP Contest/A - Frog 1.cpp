// ﷽
// Contest: Educational DP Contest
// Judge: AtCoder
// URL: https://atcoder.jp/contests/dp/tasks/dp_a
// Memory Limit: 1024
// Time Limit: 2000
// Start: Mon 08 Jul 2024 01:27:11 AM EEST
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

  
  int n;
  vector<int> v;
  int f(int i)
  {
    if(i>=n)
      return INT_MAX;
    if(i==n-1)
      return 0;
    return min(f(i+1)+abs(v[i+1]-v[i]),f(i+2)+abs(v[i+2]-v[i]));

  }
void solve() {
  cin>>n;

  v=vector<int>(n);
  int dp[(int)1e5+9];
  for(auto &i:v)
    cin>>i;

  for(auto &i:dp)
  {
    i=INT_MAX;
  }
  dp[1]=0;
  int ans=0;
  for(int i=1;i<=n;i++)
  {
    if(i+1<=n)
      dp[i+1]=min(dp[i+1],dp[i]+abs(v[i]-v[i-1]));
    if(i+2<=n)
      dp[i+2]=min(dp[i+2],dp[i]+abs(v[i+1]-v[i-1]));



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
