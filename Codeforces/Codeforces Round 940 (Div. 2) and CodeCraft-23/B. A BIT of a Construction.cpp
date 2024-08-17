// ﷽
// Contest: Codeforces Round 940 (Div. 2) and CodeCraft-23
// Judge: Codeforces
// URL: https://codeforces.com/contest/1957/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 21 Apr 2024 04:42:29 PM EET
// Reading Time : 1
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
  int n,k;
  cin>>n>>k;
  int am=1,mk=k;
  if (n==1) {
    cout<<k<<"\n";
    return;
    
  }

  mk++;
  while (mk>=2) {
    mk/=2;
    am*=2;
    
  }
  debug(am,mk);
  cout<<am-1<<" "<<k-am+1<<" ";
  for (int  i = 2; i < n; i++) {
    cout<<0<<" ";
    
  }
  cout<<"\n";

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
