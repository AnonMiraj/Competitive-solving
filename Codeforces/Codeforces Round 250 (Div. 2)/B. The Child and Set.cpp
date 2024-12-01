// ﷽
// Contest: Codeforces Round 250 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/437/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 07 Nov 2024 09:13:50 PM EET
// Reading Time : 2
// Thinking Time : 1
// Coding Time : 30
// Debug Time : 30
// Submit Count : 3
// Problem Level : 3
// Category : math, dp? , bitwise
// Comments : a lot of brain rot here i dont know what is going on
#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

void solve() {
  int s, l;
  cin >> s >> l;

  vector<int> v;
  int sus = 0;
  for (int i = l; i >= 1; i -= 1) {
    for (int j = 0; j <= 32; j++) {
      if ((i >> j & 1)) {
        if (s >= (1 << j)) {
          s -= (1 << j);
          v.push_back(i);
        }
        break;
      };
    }
    if (!s) break;
  }
  if (s) {
    cout << "-1\n";
    return;
  }
  cout<<v.size()<<"\n";
  for (auto i : v) {
    cout<<i<<" ";
    
  }
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--) solve();
  return 0;
}
