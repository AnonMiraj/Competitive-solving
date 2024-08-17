// ﷽
// Contest: Educational Codeforces Round 165 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1969/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 29 Apr 2024 06:02:21 PM EEST
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

void solve() {
  string s;
  cin>>s;
  int ans=0;
  while(s.back()=='1'){
    s.pop_back();
  }
  int cost=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1')
      cost++;
    else if(cost!=0)
      ans+=cost+1;

    

    debug(cost);

  }
  cout<<ans<<"\n";
  debug(s);

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
