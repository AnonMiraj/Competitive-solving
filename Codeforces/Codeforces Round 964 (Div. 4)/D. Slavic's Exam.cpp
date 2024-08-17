// ﷽
// Contest: Codeforces Round 964 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1999/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 06 Aug 2024 05:56:24 PM EEST
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
  string s,t;
  cin>>s>>t;
  int p1=0,p2=0;
  while (p1!=t.size()&&p2!=s.size()) {
    if (s[p2]==t[p1]||s[p2]=='?') {
    s[p2]=t[p1];
    p1++;
    }
    p2++;
  
  }
  debug(p1);
  if (p1==t.size()) {

    cout<<"YES\n";
    for(auto c:s)
    cout<<(c=='?'? 'a' : c);
    cout<<"\n";
  }
  else {
    cout<<"NO"<<"\n";
  
  }


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
