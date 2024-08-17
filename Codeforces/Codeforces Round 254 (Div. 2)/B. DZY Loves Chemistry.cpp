// ﷽
// Contest: Codeforces Round 254 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/445/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 06 May 2024 08:24:56 PM EEST
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

  vector<int>adj[61];
  vector<int>vis(61,0);
int cnt=0;
void dfs(int n){
  if(vis[n])
    return;
  vis[n]=1;
  for(int i : adj[n])
    dfs(i);


}

void solve() {
  int n,m;
  cin>>n>>m;
  int a=1<<n;
  int x,y;
  int an=0;
  if(!m)
    return void(cout<<1);

  for(int i=0;i<m;i++)
  {
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  for(int i=1;i<=n;i++)
  {
    if(!vis[i])
    {
      dfs(i);
      an++;
    }
  }
  debug(an);
  debug_itr(adj+1,adj+n+1,1);
  debug(vis);

  cout<<(a>>an);

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
