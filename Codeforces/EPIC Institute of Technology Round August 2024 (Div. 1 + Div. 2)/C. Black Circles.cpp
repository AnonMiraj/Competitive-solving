// ﷽
// Contest: EPIC Institute of Technology Round August 2024 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2002/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 11 Aug 2024 05:40:13 PM EEST
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
#define sz(a) (int)(a).size()
#define pb push_back
#define F first
#define S second
#define vi vector<int>

using namespace std;

void solve() {

  int n;

  cin>>n;
  int dist;
  int mi_dist=LLONG_MAX;
  vector<pair<int,int>>v(n);
  int x,y,xx,yy;
  for(auto &[a,b]:v)
    cin>>a>>b;
  cin>>x>>y;
  cin>>xx>>yy;

  for(auto &[a,b]:v)
  {
    mi_dist=min(mi_dist,(xx-a)*(xx-a)+(yy-b)*(yy-b));
  }
  dist=(x-xx)*(x-xx)+(y-yy)*(y-yy);
  debug(mi_dist);
  debug(dist);
  if(dist<mi_dist)
    cout<<"YES\n";
  else
    cout<<"NO\n";


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
