// ﷽
// Contest: Codeforces Global Round 26
// Judge: Codeforces
// URL: https://codeforces.com/contest/1984/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 09 Jun 2024 05:53:38 PM EEST
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
  string s;
  cin>>s;
  if(s[0]!='1')
    return void(cout<<"NO\n");

  if(s.back()=='9')
    return void(cout<<"NO\n");

  for(int i=1;i<s.size()-1;i++)
  {
    if(s[i]=='0')
      return void(cout<<"NO\n");


  }
  
    return void(cout<<"YES\n");




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
