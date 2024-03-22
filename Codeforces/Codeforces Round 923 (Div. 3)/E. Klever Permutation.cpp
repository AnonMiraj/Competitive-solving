// ﷽
// Contest: Codeforces Round 923 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1927/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 06 Feb 2024 04:33:44 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstring>
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
  int arr[n];
  int a = 1, b = n;
  for (int i = 1; i <= k; i += 1) {
    for (int j = i; j <= n; j += k) {
      arr[j-1] = i % 2 ? a++ : b--;
    }
  }
  for (auto &i : arr) {
    cout << i << ' ';
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
