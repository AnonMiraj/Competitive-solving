// ﷽
// Contest: Codeforces Round 340 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/617/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 26 Apr 2024 09:10:46 AM EEST
// Reading Time : 2
// Thinking Time : 2
// Coding Time : 4
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
  int n;
  cin >> n;
  vector<pair<int, int>> v;
  int t;
  int ans = 1;

  v.push_back({1, 0});
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t) {
      v.push_back({1, 0});
    } else {
      v.back().second++;
    }
  }
  if (v.size()==1) {
    cout<<0;
    return;

  }
  for (int i = 1; i < v.size() - 1; i++) {
    ans *= v[i].second + 1;
  }
  cout << ans;
  debug(v);
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
