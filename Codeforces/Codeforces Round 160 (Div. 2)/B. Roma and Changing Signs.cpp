// ﷽
// Contest: Codeforces Round 160 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/262/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 10 Apr 2024 04:39:42 PM EET
// Reading Time : 2
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
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
  int n, k, sm = INT_MAX, o = 0;
  cin >> n >> k;
  vector<int> m(n);
  for (int i = 0; i < n; i++) {
    cin >> m[i];
  }
  sort(m.begin(), m.end());

  for (int i = 0; i < n; i++) {
    if (k&&m[i] < 0) {
      m[i] *= -1;
      k--;
    }
    sm = min(m[i], sm);
  }
  if (k&1) {
    sm*=-1;
  }
  else {
    sm=0;
  }

  int ans=0;
  for (int i = 0; i < n; i++) {
    ans+=m[i];
  }
  cout<<ans+sm*2;
  debug(ans+sm*2);
  debug(m,sm);
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
