// ﷽
// Contest: AtCoder Beginner Contest 353
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc353/tasks/abc353_b
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat 11 May 2024 03:04:35 PM EEST
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

  int n,k;
  cin>>n>>k;
  vector<int>v;
  int t;
  int su=0;
  int cart=0;
  for(int i=0;i<n;i++)
  {
    cin>>t;
    v.push_back(t);
  }
   for(int i=0;i<n;i++)
  {
    if(cart+v[i]<=k)
    {
      cart+=v[i];
    }
    else
    {
      cart=v[i];
      su++;
    }
    
  } 
   if(cart)
     su++;
  debug(v);
  cout<<su;



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
