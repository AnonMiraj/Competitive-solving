// ﷽
// Contest: Codeforces Round 950 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1980/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 03 Jun 2024 05:36:01 PM EEST
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

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z7]=
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long

using namespace std;

void solve() {
int n ,m;

cin>>n>>m;
int f[7]={};
char t;
for(int i=0;i<n;i++)
  
{
  cin>>t;
  f[t-'A']++;
}
int ans=0;
for(int i=0;i<7;i++)
{
  if(f[i]<m)
    ans+=m-f[i];
}
debug_itr(f,f+7);
cout<<ans<<"\n";


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
