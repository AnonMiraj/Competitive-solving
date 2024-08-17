// ﷽
// Contest: Codeforces Round 221 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/376/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 24 Apr 2024 01:40:22 PM EET
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
  int n,m;
  cin>>n>>m;
  vector<int> owe(n+1,0),need(n+1,0);
  int a,b,c;
  while (m--) {
    cin>>a>>b>>c;
    owe[a]+=c;
    need[b]+=c;
    
  }
  int su=0;
  for (int  i = 1; i <= n; i++) {
    owe[i]=max(owe[i]-need[i],0LL);
    su+=owe[i];
    
  }
  cout<<su;
  debug(owe);
  debug(need);
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
