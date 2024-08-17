// ﷽
// Contest: Codeforces Round 939 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1956/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 13 Apr 2024 05:38:20 PM EET
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
  int n;
  cin>>n;

  map<int,int>m;
  int a,ans=0;
  for (int  i = 0; i < n; i++) {
    cin>>a;
    m[a]++;
    if (m[a]==2) {
      ans++;
    }
  }
  cout<<ans<<"\n";
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
