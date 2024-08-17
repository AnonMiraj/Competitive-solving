// ﷽
// Contest: START132D
// Judge: CodeChef
// URL: https://www.codechef.com/START132D/problems/ALIENOR
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 01 May 2024 06:17:07 PM EEST
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
using namespace std;


void solve() {
  int n,k;
  cin>>n>>k;
  string ans(k,'0');
  char one;
  int cn=-1;
  for(int i=0;i<n;i++)
  {
    cn=-1;
    for(int j=0;j<k;j++)
    {
      cin>>one;
      if(one=='1')
      {
        if(cn==-1)
          cn=j;
        else if(cn>=0)
          cn=-2;
      }

    }
    if(cn>=0)
      ans[cn]='1';

  }
  cout<<(ans.find('0')==string::npos? "YES\n":"NO\n");
  debug(ans);
}
int main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
