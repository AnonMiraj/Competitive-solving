// ﷽
// Contest: Codeforces Round 970 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2008/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 01 Sep 2024 06:32:06 PM EEST
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

using namespace std;
vector<int> pre(1e5 + 10);
void solve() {
  int l, r;
  cin >> l >> r;

  auto x = upper_bound(all(pre), (r - l));

  debug(*x);
  if (r - l == 999999999)
    cout << x - pre.begin() - 1 << "\n";
  else
    cout << x - pre.begin() << "\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  pre[1] = 1;
  pre[2] = 2;
  pre[3] = 5;
  for (int i = 4; i < 1e5 + 1; i++) {
    pre[i] = pre[i - 1] + (i - 1);
  }
  debug(pre);
  debug(pre[44721]);
  debug(pre[44722]);
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
