// ﷽
// Contest: Codeforces Round 987 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2031/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 15 Nov 2024 02:37:52 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Debug Time :
// Submit Count :
// Problem Level :
// Category :
// Comments :
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

#define MUTLI_CASE
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> vv(n);
  iota(all(vv), 1);
  debug(vv);
  int ans = INT_MAX;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]]++;
  }
  for (auto &[a, b] : m) {
    ans = min(n - b, ans);
  }

  cout << ans << "\n";
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
