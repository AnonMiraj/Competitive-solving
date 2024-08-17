// ﷽
// Contest: Educational Codeforces Round 55 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1082/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 08 Jun 2024 11:40:09 AM EEST
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

int n,c;
unordered_map<int,int>m;


void solve() {
  cin>>n>>c;

  
  int ans=0,ma=0;
  int t;

  for(int i=0;i<n;i++)
  {
    cin>>t;
    if(t==c)
      ans++;
    else
      m[t]=max(m[t],ans)+1;
    debug(t,m[t],ans);
    ma=max(ma,m[t]-ans);
  }
  cout<<ma+ans<<'\n';
  
// 1 2 2 2 2 1 2 2 2 2 1
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
