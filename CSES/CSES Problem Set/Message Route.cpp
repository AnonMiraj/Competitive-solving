// ﷽
// Contest: CSES Problem Set
//
// Judge: CSES
// URL: https://cses.fi/problemset/task/1667
// Memory Limit: 512
// Time Limit: 1000
// Start: Thu 05 Sep 2024 09:26:40 AM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> adj[n + 1];
  vector<int> vis(n + 1);
  queue<int> q;
  vector<int> ans;
  int t, tt;
  for (int i = 0; i < m; i++) {
    cin >> t;
    cin >> tt;
    adj[t].push_back(tt);
    adj[tt].push_back(t);
  }
  vis[1]=-1;
  q.push(1);
  debug_itr(adj, adj + n + 1);
  while (!q.empty()) {
    int cur = q.front();
    debug(q);
    q.pop();
    cerr << cur << " ";

    for (auto i : adj[cur]) {
      if (!vis[i]) {
        q.push(i);
        vis[i] = cur;
      }
    }
  }

  if(!vis[n])
  {
    cout<<"IMPOSSIBLE\n";
    return;
  }
  int k=n;
    ans.push_back(k);
  while(vis[k]!=-1)
  {
    k=vis[k];
    ans.push_back(k);

  }
  debug(ans);
  debug(vis);
  cout<<ans.size()<<"\n";
  for (int i = 0; i < ans.size(); i++) {
    cout<<ans[ans.size()-i-1]<<" ";
  }
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}
