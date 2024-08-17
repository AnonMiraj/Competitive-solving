// ﷽
// Contest: Codeforces Round 951 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1979/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 06 Jun 2024 06:47:54 PM EEST
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
  int n;
  cin>>n;
  vector<pair<int,int>> v(n);
  vector<pair<int,int>> ans(n);
  int x;
  int su=0;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    su+=x;
    v[i]={x,i};
  }
  su*=1e6;
  sort(v.begin(),v.end());
  int d=su;
  for(int i=0;i<n;i++)
  {
    int t=min((su/v[i].first)+1,d);
    ans[i]={v[i].second,t};
    debug(su);
    debug();
    if(ans[i].second*v[i].first<su)
    {
      cout<<-1<<"\n";
      return;

    }
    d-=t;
  }

  sort(ans.begin(),ans.end());
  for(auto [a,b]:ans )
  {
    cout<<b<<" ";


  }
  cout<<'\n';
  debug(v);
  debug(ans);


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
