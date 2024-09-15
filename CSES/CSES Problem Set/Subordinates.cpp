// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1674
// Memory Limit: 512
// Time Limit: 1000
// Start: Sat 24 Aug 2024 08:29:28 PM EEST
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
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> adj[n+1];
  vector<int> ans(n+1);
  int t;
  for (int i = 2; i <= n; i++) {
    cin>>t;
    adj[t].push_back(i);
  }
  debug_itr(adj,adj+n+1);
  function<int(int)> dfs = [&](int p){
    for(auto v:adj[p])
    {
      ans[p]+=dfs(v);
    }
    return ans[p]+1;
  };

  dfs(1);
  for(int i=1;i<=n;i++)
    cout<<ans[i]<<" ";
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
