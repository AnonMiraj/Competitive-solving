// ﷽
// Contest: Codeforces Round 964 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1999/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 06 Aug 2024 05:38:36 PM EEST
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
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int ans=0;
  if (a>c&&b>=d||b>d&&a>=c) {
    ans+=2;
  }

  if (a>d&&b>=c||b>c&&a>=d) {
    ans+=2;
  }
  cout<<ans<<endl;

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
