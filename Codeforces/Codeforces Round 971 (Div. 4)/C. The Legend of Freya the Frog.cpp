// ﷽
// Contest: Codeforces Round 971 (Div. 4)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2009/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 03 Sep 2024 05:53:49 PM EEST
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
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {
  int x,y,d;
  cin>>x>>y>>d;
  int ma=ceil(max(x,y)/(float)d)*2;
  if(x==0&&y==0)
    cout<<0<<"\n";
  else if(ceil(x / d) <= ceil(y / d))
    cout<<ma<<"\n";
  else
    cout<<ma-1<<"\n";


}
int32_t main() {

  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
