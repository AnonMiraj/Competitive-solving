// ﷽
// Contest: Educational Codeforces Round 171 (Rated for Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2026/problem/D
// Memory Limit: 512
// Time Limit: 4000
// Start: Tue 29 Oct 2024 02:02:32 AM EEST
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

vector<int> ps0;
vector<int> ps1;
vector<int> ps2;
vector<int> psi;

long long get_partial(int l, int r1, int r2) {
  if (r2 <= r1) return 0ll;
  int cnt = r2 - r1;
  long long rem = ps1[l] * cnt;
  long long add = ps2[r2] - ps2[r1];

  debug(ps1);
  debug(ps2);
  debug(rem);
  debug(add);
  return add - rem;
}
void solve() {
  int n;
  cin >> n;
  ps0 = vector<int>(n + 1);
  ps1 = vector<int>(n + 1);
  ps2 = vector<int>(n + 1);

  vector<int> ps3(n + 1);
  vector<int> ps4(n + 1);
  psi = vector<int>(n + 1);
  iota(psi.rbegin(), psi.rend() - 1, 1);
  debug(psi);
  for (int i = 1; i <= n; i++) {
    psi[i] += psi[i - 1];
  }
  for (int i = 1; i <= n; i++) {
    cin >> ps0[i];
    if (i) {
      ps1[i] = ps0[i] + ps1[i - 1];
      ps2[i] = ps1[i] + ps2[i - 1];
    }
  }
  ps3[1] = ps2[n];
  ps4[1] = ps2[n];
  for (int i = 2; i <= n; i++) {
    debug((n - i + 1), ps0[i - 1]);
    ps3[i] = ps3[i - 1] - (n - i + 2) * ps0[i - 1];
    ps4[i] += ps3[i] + ps4[i - 1];
  }
  int q;
  cin >> q;
  int l, r;
  function<pair<int, int>(int)> bs = [&](int i) {
    int idx = upper_bound(psi.begin(), psi.end(), i) - psi.begin() - 1;
    pair<int, int> res = {idx, i - psi[idx] + idx};
    return res;
  };

  while (q--) {
    cin >> l >> r;
    l--;
    r--;
    auto l2 = bs(l), r2 = bs(r);
    debug(l2);
    debug(r2);

    debug(psi);
    debug(l, r);
    debug(l2, r2);
    int ans = ps4[r2.F + 1] - ps4[l2.F];
    if (l2.F != l2.S) ans -= get_partial(l2.F, l2.F, l2.S);
    if (r2.F != n - 1) ans -= get_partial(r2.F, r2.S + 1, n);

    cout << ans << "\n";
  };

  debug(ps0);
  debug(ps1);
  debug(ps2);
  debug(ps3);
  debug(ps4);
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
