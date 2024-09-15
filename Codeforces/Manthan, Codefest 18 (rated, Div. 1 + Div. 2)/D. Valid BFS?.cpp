// ﷽
// Contest: Manthan, Codefest 18 (rated, Div. 1 + Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/1037/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 08 Sep 2024 05:10:42 AM EEST
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
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;
bool f(vector<int>& a, vector<int>& b, int c, int d) {
    vector<int> g(a.begin() + c, a.begin() + d);
    vector<int> h(b.begin() + c, b.begin() + d);

    sort(g.begin(), g.end());
    sort(h.begin(), h.end());

    return g != h;
}
void solve() {
  int n;
  cin >> n;
  vector<int> adj[n + 1];
  vector<int> adj_dir[n + 1];
  int a, b;
  for (int i = 0; i < n - 1; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  queue<int> q;
  vector<int> vis(n + 2, 0);
  q.push(1);
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    if (vis[x]) continue;
    vis[x] = 1;
    debug(q);
    for (auto i : adj[x]) {
      if (!vis[i]) {
        q.push(i);
        adj_dir[x].push_back(i);
      }
    }
  }
  debug_itr(adj + 1, adj + n + 1);
  debug_itr(adj_dir + 1, adj_dir + n + 1);
  map<int,int> m;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
      cin >> v[i];
  }
  debug(v);
  int ind=0;
  vector<int> ans;
  vector<int> lengths={1};
  ans.push_back(1);
  for (int i = 0; i < n; i++) {
    if(adj_dir[v[i]].size())
      lengths.push_back(adj_dir[v[i]].size());
      for (auto j : adj_dir[v[i]]) {
        ans.push_back(j);
      }
  }
  debug(ans);
  debug(lengths);
  for (auto i : lengths) {
    if(f(ans,v,ind,ind+i))
    {
      debug(ans);
      debug(v);
      cout<<"No\n";
      return;
    }
    ind+=i;
    
  }
      cout<<"Yes\n";
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
