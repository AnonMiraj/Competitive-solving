// ﷽
// Contest: START134
// Judge: CodeChef
// URL: https://www.codechef.com/problems/OG
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 16 May 2024 10:29:56 PM EEST
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
  cout<<(n/9*45)+((n%9)*(n%9+1))/2<<"\n";

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
