// ﷽
// Contest: Codeforces Round 947 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1975/problem/c
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 25 May 2024 06:29:45 PM EEST
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
  int ma=-1;
  vector<int>v(n);
  for(int & i:v)
  {
    cin>>i;
    
  }
  if(n==2)
  {
    cout<<v[0]<<"\n";
    return;

  }
  for(int i=0;i<n-2;i++)
  {
  vector<int>t={v[i],v[i+1],v[i+2]};
  sort(t.begin(),t.end());
  debug(t);
  ma=max(ma,t[1]);
  }
  cout<<ma<<"\n";

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
