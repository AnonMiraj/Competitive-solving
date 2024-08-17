// ﷽
// Contest: Codeforces Round 510 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1042/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 09 May 2024 02:41:00 PM EEST
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
pair<int,int>arr[1009];
vector<vector<int>>dp(1009,vector<int>(10,INT_MAX));
int ans=INT_MAX;

//int dpf(int ind,int price,int vit)
//{
 // if(dp[ind].first==vit&&dp[ind].second!=INT_MAX)
 // {
 //   return dp[ind].second;
 // }

 // if(vit==7) 
 // {
 //   return price;
 // }

 // if(ind==n)
 // {
 //   return INT_MAX;
 // }
 // dp[ind].first==vit;
 // return dp[ind].second=min(dpf(ind+1,price+arr[ind].first,vit|arr[ind].second),dpf(ind+1,price,vit));
//}
void df(int ind,int price,int vit)
{
  if(vit==7) 
  {
    ans=min(price,ans);
    return;
  }

  if(ind==n)
  {
    return;
  }
  df(ind+1,price+arr[ind].first,vit|arr[ind].second);
  df(ind+1,price,vit);
}
void solve() {

  cin>>n;
  string s;
  int t,sec;
  for(int i=0;i<n;i++)
  {
    cin>>t>>s;
    sec=0;
    for(char c:s)
    {
      switch (c)
      {
        case 'A':
          sec|=1;
          break;
        case 'B':
          sec|=2;
          break;
        case 'C':
          sec|=4;
          break;
      }
    }
    arr[i]={t,sec};
  }

  debug_itr(arr,arr+n);
  
  dp[0][0]=0;
  for(int i=0;i<n;i++)
  {
  for(int m=0;m<8;m++)
  {

    dp[i+1][m]=min(dp[i+1][m],dp[i][m]);
    dp[i+1][m|arr[i].second]=min(dp[i+1][m|arr[i].second],dp[i][m]+arr[i].first);


  }

  }
  ans =  dp[n][7];

  cout<<(ans==INT_MAX? -1:ans);


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
