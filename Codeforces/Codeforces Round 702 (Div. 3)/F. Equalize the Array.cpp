// ﷽
// Contest: Codeforces Round 702 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1490/problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 01 Jun 2024 07:00:22 PM EEST
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
  map<int,int>m;
  map<int,int>f;
  int t;
  for(int i=0;i<n;i++)
  {
  cin>>t;
  m[t]++;
  }
  for(auto [a,b]:m){

    f[b]++;

  }
  debug(m);
  debug(f);

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
