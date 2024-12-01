// ﷽
// Contest: Codeforces Round 163 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/266/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 24 Oct 2024 11:19:20 AM EEST
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

void solve() {
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  while(t--)
  for (int i = 1; i < n; ++i) {
    if (s[i] == 'G' && s[i - 1] == 'B') {
      swap(s[i], s[i - 1]);
      i += 1;
    }
  }

  cout << s;
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
