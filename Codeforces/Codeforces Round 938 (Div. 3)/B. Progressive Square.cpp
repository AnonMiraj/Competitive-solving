// ﷽
// Contest: Codeforces Round 938 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1955/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 08 Apr 2024 04:59:54 PM EET
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
  int n, c, d, mi = INT_MAX;
  cin >> n >> c >> d;
  int arr[n * n];
  vector<vector<int>> brr(n);
  for (int i = 0; i < n; i++) {
    brr[i].assign(n, 0);
  }
  map<int, int> a, b;
  for (int i = 0; i < n * n; i++) {
    cin >> arr[i];
    mi = min(arr[i], mi);
    a[arr[i]]++;
  }
  brr[0][0] = mi;
  int j;
  for (j = 1; j < n; j++) {
    brr[0][j] = brr[0][j - 1] + d;
  }

  for (int i = 0; i < n; i++) {

    b[brr[0][i]]++;
    for (j = 1; j < n; j++) {
      brr[j][i] = brr[j - 1][i] + c;
      b[brr[j][i]]++;
    }
  }
  debug(a);
  debug(b);

  for (int i = 0; i < n * n; i++) {
    if (a[arr[i]] != b[arr[i]]) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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
