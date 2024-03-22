// ﷽
// Contest: Codeforces Round 929 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1933/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 27 Feb 2024 03:39:35 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <functional>
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
int gcd(int x, int y) {
  while (y != 0) {
    long c = x % y;
    x = y;
    y = c;
  }
  return x;
}
void solve() {
  int n;
  cin >> n;
  int arr[n];
  int mo = 0;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    mo = __gcd(arr[i], mo);
  }
  sort(arr, arr + n);

  if (arr[0] == arr[n - 1]) {
    cout << "NO\n";
    return;
  }

  if (arr[0] != arr[1]) {
    cout << "YES\n";
    return;
  }
  if (mo == arr[0]) {
    cout << "NO\n";
    return;
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
