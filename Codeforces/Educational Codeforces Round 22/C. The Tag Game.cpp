// ﷽
// Contest: Educational Codeforces Round 22
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/813/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 26 Aug 2024 09:27:13 PM EEST
// Reading Time : 2
// Thinking Time : 7
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
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;
  int a, b;
  vector<int> adj[n + 1];
  vector<int> dis_a(n + 1);
  vector<int> dis_b(n + 1);
  vector<int> vis_a(n + 1);
  vector<int> vis_b(n + 1);
  for (int i = 0; i < n-1; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  function<void(int, vector<int>&, vector<int>&, int)> dfs =
      [&](int p, vector<int> &vist, vector<int> &d, int dist) {
        vist[p] = 1;
        d[p] = dist;
        for (auto v : adj[p]) {
          if (!vist[v]) {
            dfs(v, vist, d, dist + 1);
          }
        }
      };
  dfs(1,vis_a,dis_a,0);
  dfs(x,vis_b,dis_b,0);
  debug(dis_a);
  debug(dis_b);
  int ans=0;
  for (int i = 1; i <= n; i++) {
    if(dis_a[i]>dis_b[i])
    {
      ans=max(ans,dis_a[i]);
    }
  }
  cout<<ans*2;
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
