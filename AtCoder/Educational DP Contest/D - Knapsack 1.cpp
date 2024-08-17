// ﷽
// Contest: Educational DP Contest
// Judge: AtCoder
// URL: https://atcoder.jp/contests/dp/tasks/dp_d
// Memory Limit: 1024
// Time Limit: 2000
// Start: Mon 08 Jul 2024 02:32:39 AM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include <algorithm>
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

/*int f(int i,int ww)*/
/*{*/
/**/
/*  if(w<ww)*/
/*    return -INT_MAX;*/
/*  if(w==ww)*/
/*    return 0;*/
/*  if(i>=n)*/
/*    return 0;*/
/*  if(dp[ww][i]!=-INT_MAX)*/
/*    return dp[ww][i];*/
/**/
/**/
/*  return dp[ww][i]=max(f(i+1,ww+v[i].first)+v[i].second,f(i+1,ww));*/
/**/
/*}*/
void solve() {

  int dp[(int)1e5+9];
  vector<pair<int,int>>v;
  int n,w;
  cin>>n>>w;

  v=vector<pair<int,int>>(n);
  for(auto & [a,b]:v)
  {
    cin>>a>>b;
  }
  for(auto &i:dp)
  {
    i=0;
  }
  dp[0]=0;
  for(int i =1;i<=n;i++)
  {
  auto & [a, b] = v[i-1];
  for(int j =w;j>=0;j--)
  {
    if(j>=a)
      dp[j]=max(dp[j-a]+b,dp[j]);
  }
  }

  int ans=-1;
  for(int j =w;j>=0;j--)
  {
    ans=max(ans,dp[j]);
  }
  cout<<ans;

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
