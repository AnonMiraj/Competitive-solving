// ﷽
// Contest: Educational Codeforces Round 168 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1997/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 31 Jul 2024 06:45:32 AM EEST
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
string ss1[]={"x.x","..."};
string ss2[]={"...","x.x"};
bool test(string s1,string s2)
{
  return (s1==ss1[0]&&s2==ss2[0])||(s1==ss1[1]&&s2==ss2[1]);

}
 
void solve() {
  int n;
  cin>>n;
  string s1,s2;
  cin>>s1>>s2;
  if (n<=2) {
    cout<<0<<"\n";
    return;
  }
  int cnt=0;
  for (int  i = 0; i < n -2 ; i++) {
    cnt+=test(s1.substr(i,3),s2.substr(i,3));
  }
  cout<<cnt<<"\n";

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
