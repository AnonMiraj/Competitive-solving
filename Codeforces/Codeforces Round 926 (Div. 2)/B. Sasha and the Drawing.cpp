// ﷽
// Contest: Codeforces Round 926 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1929/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 15 Feb 2024 03:23:05 PM UTC
//
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  if (4 * n - 2 == k) {

    cout << 2 * n << "\n";
    return;
  }
  cout << (k + 1) / 2 << "\n";
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
