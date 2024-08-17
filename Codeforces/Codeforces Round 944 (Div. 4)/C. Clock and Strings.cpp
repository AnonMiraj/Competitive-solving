// ﷽
// Contest: Codeforces Round 944 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1971/problem/C?csrf_token=a7baf2149da75f24fcce137c2f7e5c29
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 10 May 2024 05:41:12 PM EEST
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
  if(a<b)
    swap(a,b);
  if(c<d)
    swap(c,d);
  if(a<c)
    swap(a,c),swap(b,d);
  
  debug(a,b,c,d);
  if((c>b)^(d>b))
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
