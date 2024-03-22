// ﷽
// Contest: Codeforces Round 649 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1364/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 05 Jan 2024 08:56:57 PM UTC
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
  int n, x;
  cin >> n >> x;
  int ans = n, sum = 0;
  vector<int> v(n+1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    sum += v[i];
    if (v[i] % x)
      ans = min(ans, min(i, n - i + 1));
  }
  if (sum % x) {
    cout << n;
  } else if (ans < n) {
    cout << n - ans;
  } else {
    cout << -1;
  }
  cout << "\n";
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
