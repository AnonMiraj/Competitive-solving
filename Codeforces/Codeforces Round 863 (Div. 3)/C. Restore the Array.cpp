// ﷽
// Contest: Codeforces Round 863 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1811/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 27 Mar 2024 06:45:29 AM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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
  vector<int> ans(n, 1e10), v(n);
  for (int i = 0; i < n - 1; i++) {
    cin >> v[i];
  }
  ans[0] = v[0];
  ans[n - 1] = v[n - 2];
  int s = 1;

  for (int i = 0; i < n - 1; i++) {
    if (max(ans[i+1], ans[i]) != v[i]) {
      ans[i] = v[i];
    }
  }

  for (int i = 0; i < n - 1; i++) {
    if (max(ans[i+1], ans[i]) != v[i]) {
      ans[i+1] = v[i];
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << "\n";
  debug(ans);
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
