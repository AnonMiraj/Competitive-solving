// ﷽
// Contest: Codeforces Round 981 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2033/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 24 Oct 2024 05:53:00 PM EEST
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

int f(vector<int>& v, int i, int d) {
  int n = v.size();
  int j = n - i + 1;

  int newd = d;

  if (i > 1 && v[i - 2] == v[i - 1]) newd--;
  if (i < n && v[i - 1] == v[i]) newd--;

  if (j > 1 && v[j - 2] == v[j - 1]) newd--;
  if (j < n && v[j - 1] == v[j]) newd--;

  if (i > 1 && v[i - 2] == v[j - 1]) newd++;
  if (i < n && v[j - 1] == v[i]) newd++;

  if (j > 1 && v[j - 2] == v[i - 1]) newd++;
  if (j < n && v[i - 1] == v[j]) newd++;

  return newd;
}
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int d = 0;
  for (int i = 0; i < n - 1; i++) {
    if (v[i] == v[i + 1]) d++;
  }
  int old = d;
  while (1) {
    for (int i = 0; i <= n / 2; i++) {
      int nd = f(v, i + 1, d);
      if (nd < d) {
        d = nd;
        swap(v[i], v[n - i - 1]);
      }
    }
    if (old == d)
      break;
    else
      old = d;
  }
  debug(v);
  cout << d << "\n";
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
