// ﷽
// Contest: Codeforces Round 948 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1977/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 26 May 2024 06:30:59 PM EEST
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

using namespace std;

void solve() {
  int n;
  cin >> n;
  int t;
  vector<int> arr;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    cin >> t;
    arr.push_back(t);
    m[t]++;
  }
  int ans = 0;

  int result = 1;
  for (auto &[a, b] : m) {
    int res = lcm(result, a);
    ans += b;

    result = res;
  }
  if (!m[result]) {
    cout << ans << "\n";
    return;
  }
  vector<int> a7a;
  for (int i = 1; i * i <= result; ++i) {
    if (result % i == 0) {
      if (m.find(i) == m.end())
        a7a.push_back(i);
      if (i != result / i && m.find(result / i) == m.end()) {
        a7a.push_back(result / i);
      }
    }
  }
  debug(a7a);

  ans = 0;
  for (int x : a7a) {
    int cnt = 0;
    int tl = 1;
    for (auto a : arr) {
      if (x % a == 0) {
        cnt++;
        tl = lcm(tl, a);
      }
    }
    if (tl != x)
      continue;
    ans = max(ans, cnt);
  }
  cout << ans << "\n";
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
