// ﷽
// Contest: Codeforces Round 935 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1945/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 19 Mar 2024 10:39:49 PM EET
// Reading Time : 3
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
#include <pthread.h>
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

int n, m;
// 
//
//
vector<int> pref;
void solve() {
  cin >> n >> m;
  int ans = INT_MAX;
  int cur = 0;
  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    if (i < m) {
      ans = min(ans, cur + a[i]);
    }
    cur += min(a[i], b[i]);
  }

  cout << ans << "\n";
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
