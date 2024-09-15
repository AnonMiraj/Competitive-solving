// ﷽
// Contest: Codeforces Round 435 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/862/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 31 Aug 2024 08:14:38 PM EEST
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
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {

  int n;
  cin>>n;
  vector<int> adj[n+1];
  vector<pair<int,int>> vis(n+1);

  int a,b;
  for (int i = 0; i < n-1; i++) {
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int ans=0;
  int bi=0,bi2=0;
  function<void(int,int)> dfs = [&](int p,int l){
    vis[p].F=l;
      if(l==1)
        bi++;
      else
        bi2++;
    for(auto v:adj[p])
    {
      if(!vis[v].F)
      {

        vis[p].S++;
        vis[v].S++;
        dfs(v,l^3);
      }
    }
  };
  dfs(1,1);
  debug(vis,bi);
  cout<<max(0LL,(bi*bi2)-n+1)<<"\n";

}
int32_t main() {

  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--)
    solve();
  return 0;
}
