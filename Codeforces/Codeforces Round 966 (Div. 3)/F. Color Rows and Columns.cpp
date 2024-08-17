// ﷽
// Contest: Codeforces Round 966 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2000/problem/f
// Memory Limit: 256
// Time Limit: 3000
// Start: Tue 13 Aug 2024 07:05:08 PM EEST
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define F first
#define S second
#define vi vector<int>

using namespace std;

void solve() {
  int n;
  int k;
  cin >> n >> k;
  vector<pair<int, int>> v(n);
  while (n--) {
    int a, b;

    cin >> a >> b;
    int x = min(a, b);
    int y = max(a, b);
    v[n] = {x, y};
  }
  int ans = 0;
  int ansk = 0;
  int ind = 0;
  sort(all(v), [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
    return (a.first + a.second) < (b.first + b.second);
  });
  debug(v);
  for (auto &[x, y] : v) {
    if (ansk + x + y > k) {
      break;
    }
    ansk += x + y;
    ans += x * y;
    ind++;
  }
  if (ansk == k) {
    cout << ans << "\n";
    return;
  }
  if (ind == v.size()) {
    cout << -1 << "\n";
    return;
  }
  auto [x, y] = v[ind];
  int xx = x;
  int yy = y;
  int need = k - ansk;
  debug(ind);
  debug(k, ansk);
  debug(ans);
  while (true) {

    ansk++;
    if (x && x < y) {
      ans += x;
      y--;
    } else {
      ans += y;
      x--;
    }
    if (ansk >= k) {
      cout << ans << "\n";
      return;
    }
  }

    cout << -1 << "\n";
    return;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
