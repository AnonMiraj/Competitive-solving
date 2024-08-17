// ﷽
// Contest: Codeforces Round 963 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1993/problem/a
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 04 Aug 2024 07:18:45 PM EEST
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
  string s;
  cin>>n>>s;
  int ans=0;
  map<char,int> m;

  for(char i: s)
  {
    if(i!='?')
    m[i]++;
  }

  for(auto &[a,b]: m)
  {
    ans+=min(n,b);
  }
  cout<<ans<<endl;

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
