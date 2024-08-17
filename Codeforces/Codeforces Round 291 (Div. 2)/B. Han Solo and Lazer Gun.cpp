// ﷽
// Contest: Codeforces Round 291 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/514/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 26 Apr 2024 10:27:58 AM EEST
// Reading Time :
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
  int n;
  int x, y;
  cin >> n >> x >> y;
  vector<pair<int, int>> a(n);
  vector<int> m(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  int cnt=0;
  for (int i = 0; i < n; i++) {
    if (!m[i]) {
      m[i] = 1;
      for (int j = 0; j < n; j++) {
        if ((a[j].first - a[i].first) * (y - a[i].second) ==
            (x - a[i].first) * (a[j].second - a[i].second)) {
          m[j] = 1;
        }
      }
      cnt++;
    }
  }
  cout<<cnt;
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
