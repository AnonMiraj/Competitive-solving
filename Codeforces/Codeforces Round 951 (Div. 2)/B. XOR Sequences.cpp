// ﷽
// Contest: Codeforces Round 951 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1979/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 06 Jun 2024 05:47:27 PM EEST
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
  int x,y;
  cin>>x>>y;

  bitset<35> a(x),b(y);
  int ans =1;
  for(int i=0;i<35;i++)
  {
    if(a[i]!=b[i])
      break;
    ans*=2;


  }
  cout<<ans<<"\n";

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
