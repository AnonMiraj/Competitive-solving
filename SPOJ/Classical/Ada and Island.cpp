// ﷽
// Contest: Classical
//
// Judge: SPOJ
// URL: https://www.spoj.com/problems/ADASEA/
// Memory Limit: 1536
// Time Limit: 2000
// Start: Mon 26 Aug 2024 10:30:56 PM EEST
// Reading Time : 1
// Thinking Time : 2
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
  int n, m;
  cin >> n >> m;
  vector<string> v(n);
  debug(n, m);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  debug(v);

  function<int(int, int)> dfs = [&](int x, int y) {
    if (x == -1 || y == -1) return 0LL;
    if (x == m || y == n) return 0LL;
    if (v[y][x] == '~') return 0LL;
    v[y][x] = '~';
    return dfs(x, y + 1) + dfs(x, y - 1) + dfs(x + 1, y) + dfs(x - 1, y) + 1LL;
  };
  map<int,int> ma;
  int cnt=0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(v[i][j]=='#')
      {
        cnt=dfs(j,i);
        ma[cnt]++;
      }
    }
  }
  debug(ma);
  int ans=0;

  for (auto &p : ma) {
      ans += p.first * (p.first * p.second);
  }

  int q=n*m;
  int gg=__gcd(ans,q);
  debug(ans,n*m);
  debug(gg);
  if((q)/gg==1)
  {
    cout<<ans/q<<"\n";
  }
  else
  {
    cout<<ans/gg<<" / "<<(q)/gg<<"\n";
  }
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
