// ﷽
// Contest: Educational Codeforces Round 121 (Rated for Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/1626/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 16 Sep 2024 06:31:01 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
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

void solve() {
  int n;
  cin >> n;

  auto sum = [](int n) { return (n * (n + 1)) / 2; };

  vector<int> vs(n);
  for (int i = 0; i < n; i++) {
    cin >> vs[i];
  }
  vector<int> vh(n);
  vector<pair<int, int>> vans;
  for (int i = 0; i < n; i++) {
    cin >> vh[i];
  }
  if (n == 1) {
    cout << sum(vh[0]) << endl;
    return;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int start = (vs[i] - vh[i]);
    while (!vans.empty() && vans.back().second > start) {
      int cur = vans.back().second - vans.back().first;
      ans -= sum(cur);
      start = min(vans.back().first, start);
      vans.pop_back();
    }
    vans.push_back({start, vs[i]});
    int cur = vans.back().second - vans.back().first;
    ans += sum(cur);
  }
  cout << ans << endl;
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
