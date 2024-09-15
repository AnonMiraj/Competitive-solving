// ﷽
// Contest: Codeforces Round 971 (Div. 4)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2009/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 03 Sep 2024 05:35:33 PM EEST
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
  int a,b;
  cin>>a>>b;
  int c=INT_MAX;
  for (int i = a; i <=b; i++) {
    c=min((i-a)+(b-i),c);
    
  }
  cout<<c<<"\n";

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
