// ﷽
// Contest: Codeforces Round 921 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1925/problem/B
// Memory Limit: 256
// Time Limit: 1500
// Start: Sun 28 Jan 2024 09:57:25 AM UTC
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
  int x, n;
  cin >> x >> n;
  // while (x%n) {
  //   n++;
  // }
  int a = 1;
  for (int i = 1; i * i <= x; i++) {
    if (x % i == 0) {
      if (x / i >= n)
        a = max(a, i);
      if (i >= n)
        a = max(a, x / i);
    }
  }

  cout << a << endl;
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
