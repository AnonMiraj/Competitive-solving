// ﷽
// Contest: Educational Codeforces Round 166 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1976/problem/0
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 30 May 2024 05:35:53 PM EEST
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
  string s,nums,let;
  cin>>n>>s;
  cout<<(is_sorted(s.begin(),s.end())? "YES\n":"NO\n");
  
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
