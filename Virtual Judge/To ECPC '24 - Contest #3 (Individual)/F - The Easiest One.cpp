// ﷽
// Contest: To ECPC '24 - Contest #3 (Individual)
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/632920#problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 07 Jun 2024 05:36:05 PM EEST
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
  char c;
  cin>>c;
  if(c=='a')
    return void(cout<<"vowel");
  if(c=='e')
    return void(cout<<"vowel");
  if(c=='i')
    return void(cout<<"vowel");
  if(c=='o')
    return void(cout<<"vowel");
  if(c=='u')
    return void(cout<<"vowel");

    return void(cout<<"consonant");
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
