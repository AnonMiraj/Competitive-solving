// ﷽
// Contest: Codeforces Round 948 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1977/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 26 May 2024 05:35:42 PM EEST
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
  int n,m;
  cin>>n>>m;
  int t=0;
  while (n--)
  {
    if(t<=m)
      t++;
    else
      t--;
  }
  debug(t);
  cout<<(t==m? "YES\n":"NO\n");
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
