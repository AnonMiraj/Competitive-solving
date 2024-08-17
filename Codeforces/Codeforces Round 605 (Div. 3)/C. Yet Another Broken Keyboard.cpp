// ﷽
// Contest: Codeforces Round 605 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1272/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 06 May 2024 01:04:08 AM EEST
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
  int n,k;
  cin>>n>>k;
  char c;

  int freq[26]={};
  int ans=0;
  string s;
  cin>>s;
  for(int i=0;i<k;i++)
  {
    cin>>c;
    freq[c-'a']=1;
  }

  int cnt=0; 
  int dp[n+1]={};

  for(int i=0;i<n;i++)
  {
      if(freq[s[i]-'a'])
        dp[i+1]+=dp[i]+1;
      else
        dp[i+1]=0;
      cnt+=dp[i+1];
  }

  cout<<cnt;





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
