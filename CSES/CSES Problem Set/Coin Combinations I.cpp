// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1635
// Memory Limit: 512
// Time Limit: 1000
// Start: Wed 08 May 2024 12:09:39 AM EEST
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


int ma=1e9;
void solve() {
  int n,x;
  cin>>n>>x;
  int mod=(1e9+7);
  vector<int> dp(x+1,0);
  vector<int> a(n);
  for(auto &i:a)
    cin>>i;
  
  dp[0]=1;
  for(int i=1;i<=x;i++)
  {
 
  for(int j=0;j<n;j++)
    if(i-a[j]>=0)
    {
      dp[i]+=dp[i-a[j]];
      dp[i]%=mod;

    }

  }

  cout<<dp[x];


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
