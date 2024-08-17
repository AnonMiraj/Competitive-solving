// ﷽
// Contest: Codeforces Round 799 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1692/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 11 May 2024 10:25:44 PM EEST
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
  int an=0;
  if(b>a)
    an++;

  if(c>a)
    an++;

  if(d>a)
    an++;
  cout<<an;
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
