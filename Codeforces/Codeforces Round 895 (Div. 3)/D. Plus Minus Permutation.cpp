// ﷽
// Contest: Codeforces Round 895 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1872/problem/D
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 21 May 2024 08:28:08 PM EEST
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

int super(int n)
{
  return (n*(n+1))/2;
}
void solve() {

  int n,x,y;
  cin>>n>>x>>y;
  int m1,m2,m3;
  int z=(x*y)/__gcd(x,y);
  m1=n/x-n/z;
  m2=n/y-n/z;
  debug(z);
  debug(m1);
  debug(m2);
  int ma=n,mi=1;
  cout<<super(ma)-super(ma-m1)-super(m2)<<"\n";


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
