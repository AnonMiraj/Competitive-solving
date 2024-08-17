// ﷽
// Contest: Codeforces Global Round 25
// Judge: Codeforces
// URL: https://codeforces.com/contest/1951/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 06 Apr 2024 05:19:22 PM EET
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
  int n, m, k;
  cin >> n >> m >> k;
  int total = n * m;
  int v[n];
  vector<pair<int, int>> arr(n);
  int a[n] = {};
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    arr[i].first = v[i];
    arr[i].second = i;
  }
  sort(arr.begin(), arr.end());
  int curr = k / m,ind=0;
  for (ind = 0; ind < curr; ind++) {
    a[arr[ind].second] = -1;
  }
  if (curr*m != k) {
    a[arr[ind].second] = k - curr * m;
  }
  int ans = 0, w = 0;
  for (int i = 0; i < n; i++) {
    if (a[i]) {
      if (a[i] == -1) {
        ans += m * (v[i] + w);
        w += m;
      } else {
        ans += a[i] * (v[i] + w);
        w += a[i];
      }
    }
  }

  cout << ans << endl;
  debug_itr(a, a + n);
  debug(curr);
  debug(arr);
  debug(total, k, m);
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
