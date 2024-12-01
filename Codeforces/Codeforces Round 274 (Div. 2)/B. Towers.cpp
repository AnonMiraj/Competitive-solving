// ﷽
// Contest: Codeforces Round 274 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/479/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 28 Nov 2024 09:47:31 AM EET
// Reading Time : 2
// Thinking Time : 10
// Coding Time : 3
// Debug Time :
// Submit Count : 1
// Problem Level : 2
// Category : adhoc
// Comments : just need to notive the constraints
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
  int n, k;
  cin >> n;
  cin >> k;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].F;
    v[i].S = i + 1;
  }
  vector<pair<int, int>> ans;
  sort(all(v));
  int cnt = 0;
  while (k-- && v[0].F != v[n - 1].F) {
    cnt++;
    v[n - 1].F--;
    v[0].F++;
    ans.push_back({v[0].S, v[n - 1].S});
    sort(all(v));
  }
  debug(v);
  cout << abs(v[n - 1].F - v[0].F);
  cout << " " << cnt << "\n";
  for (auto &[a, b] : ans) {
    cout << b << " " << a << "\n";
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
