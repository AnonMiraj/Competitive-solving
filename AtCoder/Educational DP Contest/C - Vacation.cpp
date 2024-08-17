// ﷽
// Contest: Educational DP Contest
// Judge: AtCoder
// URL: https://atcoder.jp/contests/dp/tasks/dp_c
// Memory Limit: 1024
// Time Limit: 2000
// Start: Mon 08 Jul 2024 01:59:41 AM EEST
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

  int arr[(int)1e6+9][3];
  int n;

  int dp[(int)1e5+9][3];
int f(int i,int x)
{
  if(i==n)
    return 0;
  if(x!=-1&&dp[i][x])
    return dp[i][x];
  return dp[i][x]=max({
              f(i+1,1)+(x==1)*-INT_MAX+arr[i][1],
              f(i+1,2)+(x==2)*-INT_MAX+arr[i][2],
              f(i+1,0)+(x==0)*-INT_MAX+arr[i][0],
              f(i+1,2)+(x==2)*-INT_MAX+arr[i][2],
              f(i+1,0)+(x==0)*-INT_MAX+arr[i][0],
              f(i+1,1)+(x==1)*-INT_MAX+arr[i][1]
      });


}
void solve() {
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i][0];
    cin>>arr[i][1];
    cin>>arr[i][2];
  }

  for(int i=0;i<n+10;i++)
  {
    dp[i][0]=-INT_MAX;
    dp[i][1]=-INT_MAX;
    dp[i][2]=-INT_MAX;
  }
  dp[0][0]=arr[0][0];
  dp[0][1]=arr[0][1];
  dp[0][2]=arr[0][2];
  for(int i = 1;i<=n;i++)
  {
    for(int x=0;x<3;x++)
    {
              dp[i][x]=max(dp[i-1][(x+1)%3],dp[i-1][(x+2)%3])+arr[i][x];
    }


  }

  cout<<max({dp[n][0],dp[n][1],dp[n][2]});

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
