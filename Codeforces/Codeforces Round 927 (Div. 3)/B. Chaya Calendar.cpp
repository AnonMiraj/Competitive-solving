// ﷽
// Contest: Codeforces Round 927 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1932/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 18 Feb 2024 12:31:53 PM UTC
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

int lcm(int a, int b) { return (a / std::__gcd(a, b)) * b; }
void solve() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int ans = arr[0], x;
  int j;

  for (int i = 1; i < n; i++) {

    x = arr[i];
    while (ans >= x) {
      x +=arr[i];
    }
    ans = x;
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
