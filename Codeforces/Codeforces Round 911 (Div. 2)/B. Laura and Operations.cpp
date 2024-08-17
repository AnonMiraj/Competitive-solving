// ﷽
// Contest: Codeforces Round 911 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1900/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 19 May 2024 04:13:10 AM EEST
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

bool dp(int a,int b,int c)

{
  if(!b&&!c)
    return true;
  else if(!b&&c)
    return dp(a-1,b+2,c-1);
  else if(b&&!c)
    return dp(a-1,b-1,c+2);
  else 
    return 1;

  
  return dp(a+2,b-1,c-1);




}


void solve() {

  int a,b,c;
  cin>>a>>b>>c;
  //cout<<!((b+c)&1)<<" ";
  //cout<<!((a+c)&1)<<" ";
  //cout<<!((a+b)&1)<<"\n";
  cout<<dp(a,b,c)<<" ";
  cout<<dp(b,a,c)<<" ";
  cout<<dp(c,a,b)<<"\n";

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
