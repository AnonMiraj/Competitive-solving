// ﷽
// Contest: Codeforces Round 946 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1974/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 20 May 2024 05:41:28 PM EEST
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
  int n,m;
  cin>>n>>m;
  int x=15;
  int ans=0;
  int t=0;
  while(m>1)
  {
    m-=2;
    ans++;
    n-=7;
  }
  n=max(n,0LL);
cout<<ans+ceil((n+m*4)/15.f)<<"\n";
  
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
