// ﷽
// Contest: Educational Codeforces Round 129 (Rated for Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/1681/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 10 Nov 2024 08:37:20 PM EET
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

using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n], b[n], sa[n], sb[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    sa[i] = a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
    sb[i] = b[i];
  }
  sort(sa, sa + n);
  vector<pair<int, int>> v;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n - 1; ++j) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        swap(b[j], b[j + 1]);
        v.push_back({j + 1, j + 2});
      } else if (a[j] == a[j + 1]) {
        if (b[j] > b[j + 1]) {
          swap(a[j], a[j + 1]);
          swap(b[j], b[j + 1]);
          v.push_back({j + 1, j + 2});
        }
      }
    }
  }
  bool sorted = true;
  for (int i = 0; i < n - 1; ++i) {
    if (b[i] > b[i + 1]) {
      sorted = false;
      break;
    }
  }
  if (!sorted) {
    cout << "-1\n";
    return;
  }
  cout << v.size() << endl;
  for (auto x : v) cout << x.first << " " << x.second << endl;
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
