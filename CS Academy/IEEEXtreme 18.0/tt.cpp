// ﷽
// Contest: IEEEXtreme 18.0
//
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/two-fridges/
// Memory Limit: 256
// Time Limit: 300
// Start: Sat 26 Oct 2024 03:41:36 AM EEST
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
bool com(pair<int, int> p1, pair<int, int> p2) {
  if (p1.F != p2.F)
    return p1.F < p2.F;
  else
    return p1.S < p2.S;
}

pair<int, int> f(pair<int, int> p1, pair<int, int> p2) {
  if (p1.S < p2.F) return {999, 999};

  debug(p1, p2);
  return {max(p1.F, p2.F), min(p1.S, p2.S)};
}
void solve() {
  int n;
  cin >> n;
  if(n==0)
  {
    cout<<-100<<" ";
    cout<<-100;
    return;
  }
  int nn = n;
  int l, r;
  vector<pair<int, int>> v;
  vector<pair<int, int>> ans;
  while (nn--) {
    cin >> l >> r;
    v.push_back({l, r});
  }

  sort(all(v));
  debug(v);
  for (int i = 1; i < n; i++) {
    debug(v[i], v[i - 1]);
    auto sm = f(v[i - 1], v[i]);
    debug(sm);
    if (sm.F == 999) {
      continue;
    } else {
      v[i] = sm;
      v[i - 1] = {-1000, -1000};
    }

    debug(v);
  }

  for (int i = 0; i < n; i++) {
    if (v[i].F != -1000) ans.push_back(v[i]);
  }
  debug(ans);
  if (ans.size() > 2) {
    cout << -1;
    return;
  }
  if (ans.size() == 1) {
    cout << ans[0].F << " ";
    cout << ans[0].F;
    return;
  } else {
    cout << ans[0].F << " ";
    cout << ans[1].F;
    return;
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
