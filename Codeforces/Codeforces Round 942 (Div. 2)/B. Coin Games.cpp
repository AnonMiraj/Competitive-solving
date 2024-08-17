// ﷽
// Contest: Codeforces Round 942 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1972/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 30 Apr 2024 06:08:02 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <climits>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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

  int u=0;
void f(string &s,int i){
    if(s[i]=='U')
      s[i]='D',u--;
    else 
      s[i]='U',u++;
}
void solve() {
  int n;
  cin>>n;
  string s;
  cin>>s;
  int a=0;
  u=0;
  
  for(int i=n-1;i>=0;i--){
    if(s[i]=='U')
      u++;
  }
  for(int i=n-1;u;i--){
    if(s.size()==2)
      break;
    if(s[i]=='U')
    {
      debug(s,u,a);
      f(s,(i+1)%s.size());
      f(s,(i+s.size()-1)%s.size());
      s.erase(i,1);
      if(s[i]=='U')
        i++;
      a^=1;
      u--;
    }
  }
      debug(s,u,a);
  if(u==1)
    a^=1;

  cout<<(a? "YES\n":"NO\n");

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
