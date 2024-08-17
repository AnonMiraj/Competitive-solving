// ﷽
// Contest: Pinely Round 4 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1991/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 30 Jul 2024 04:37:31 AM EEST
// Reading Time : 1
// Thinking Time : 2
// Coding Time :  1
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
  int ans=0;
  int t;

  for (int i=1;i<=n;i++) {
    cin>>t;
    if(i&1)
      ans=max(ans,t);
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
