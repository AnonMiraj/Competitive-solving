// ﷽
// Contest: Codeforces Round 280 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/492/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 27 Aug 2024 06:05:47 PM EEST
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
  int n,r,av;
  cin>>n>>r>>av;
  vector<pair<int,int>> v(n);
  int su=0;
  for (auto &[a,b] :v) {
    cin>>b>>a;
    su+=b;
  }
  int need=av*n-su;
  sort(all(v));
  debug(v,need);

  int ans=0;
  for (auto &[a,b] :v) {

    if(need<=0)
    {
      cout<<ans;
      return;
    }

    int am=min(r-b,need);
    ans+=a*am;
    need-=am;
  }
      cout<<ans;
  

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
