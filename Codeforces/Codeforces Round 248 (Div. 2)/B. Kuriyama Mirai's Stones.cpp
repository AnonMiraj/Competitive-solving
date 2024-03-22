// ﷽
// Contest: Codeforces Round 248 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/433/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 16 Feb 2024 09:38:00 AM UTC
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
  int n;
  cin >> n;
  int arr[n + 1] = {};
  int arrs[n + 1] = {};
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    arrs[i] = arr[i];
  }
  sort(arrs + 1, arrs + n + 1);
  for (int i = 1; i <= n; i++) {
    arr[i] += arr[i - 1];
    arrs[i] += arrs[i - 1];
  }
  int m;
  cin >> m;
  int t, r, l;
  while (m--) {
    cin >> t >> l >> r;
    if (t == 1)
      cout << arr[r] - arr[l - 1] << '\n';
    else
      cout << arrs[r] - arrs[l - 1] << '\n';
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
