// ﷽
// Contest: Educational Codeforces Round 164 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1954/problem/0
// Memory Limit: 512
// Time Limit: 2000
// Start: Fri 12 Apr 2024 04:37:28 PM EET
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
  int n,k,m;
  cin>>n>>m>>k;
  int am=ceil(n/(float)m);

  if (k>=n-am) {
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";

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
