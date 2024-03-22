// ﷽
// Contest: Codeforces Round 926 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1929/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 15 Feb 2024 03:47:49 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {

  int k, x, a;
  cin >> k >> x >> a;

  int su = 0;
  for (int i = 0; i <= x; i++) {
    su += su / (k - 1) + 1;
    if (su > a) {
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
