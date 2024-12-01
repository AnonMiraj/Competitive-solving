// ﷽
// Contest: Codeforces Round 981 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2033/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 24 Oct 2024 06:00:47 PM EEST
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
using namespace std;

#define MUTLI_CASE

map<int, int> empty_m;
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> pref(n);

  map<int, int> m;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    pref[i] = v[i];
    if (i) pref[i] += pref[i - 1];
    m[pref[i]]++;
    if (m[pref[i]] == 2 || pref[i] == 0) {
      ans++;
      pref[i] = 0;
      m = empty_m;
    }
  }

  debug(pref);
  debug(ans);
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
