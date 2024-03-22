// ﷽
// Contest: Educational Codeforces Round 162 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1923/problem/C
// Memory Limit: 256
// Time Limit: 3000
// Start: Fri 23 Feb 2024 04:19:53 PM UTC
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
  int n, q;
  cin >> n >> q;
  int arr[n + 1];
  int orr[n + 1] = {};
  arr[0] = 0;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    if (arr[i] == 1) {
      orr[i]=1;
    }
    orr[i] += orr[i-1];
    arr[i] += arr[i - 1];

    // cout<<orr[i]<<" ";
  }
  int l, r;
  // cout << endl;

  while (q--) {
    cin >> l >> r;
    int su = arr[r] - arr[l - 1], on = orr[r] - orr[l - 1];
    if (su - (r - l + 1) + 1 > on && (r - l + 1) != 1) {
      cout << "YES\n";
      continue;
    }
    cout << "NO\n";
  }
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
