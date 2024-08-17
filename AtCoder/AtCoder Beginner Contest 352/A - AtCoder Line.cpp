// ﷽
// Contest: AtCoder Beginner Contest 352
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc352/tasks/abc352_a
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat 04 May 2024 11:57:29 PM EEST
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
  int n,x,y,z;
  cin>>n>>x>>y>>z;
  if(x>y)
  {
    swap(x,y);

  }
  if(x<=z&&z<=y)
    cout<<"Yes";
  else 
    cout<<"No";


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
