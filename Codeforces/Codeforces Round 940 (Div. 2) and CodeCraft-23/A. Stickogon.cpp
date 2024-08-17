// ﷽
// Contest: Codeforces Round 940 (Div. 2) and CodeCraft-23
// Judge: Codeforces
// URL: https://codeforces.com/contest/1957/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 21 Apr 2024 04:38:40 PM EET
// Reading Time : 1
// Thinking Time : 1
// Coding Time : 1
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
#include <sys/types.h>
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
  int freq[101]{};
  int t,ans=0;
  for (int  i = 0; i < n; i++) {
    cin>>t;
    freq[t]++;
    if (!(freq[t]%3)) {
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
