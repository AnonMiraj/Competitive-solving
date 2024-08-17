// ﷽
// Contest: CodeTON Round 8 (Div. 1 + Div. 2, Rated, Prizes!)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1942/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 30 Mar 2024 04:37:11 PM EET
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
  // 1 2 3
  // 3 2 1
  // 2 3 1
  // 1 1 2
  // 2 1 1
  // 1 1 1 2
  // 2 1 1 1
  // 1 2 1 1
  //
  int n,k;
  cin>>n>>k;
  if (n==k) {
    
    for (int  i = 0; i < n; i++) {
      cout<<1<<" ";
    }
    cout<<"\n";
    return;
  }
  if (k==1) {
    for (int  i = 0; i < n-1; i++) {
      cout<<1<<" ";
    }
    cout<<"2\n";
    return;
  }
  cout<<-1<<"\n";

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
