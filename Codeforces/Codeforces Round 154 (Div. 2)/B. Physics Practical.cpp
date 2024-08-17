// ﷽
// Contest: Codeforces Round 154 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/253/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 26 Apr 2024 11:20:08 AM EEST
// Reading Time :
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
int ans = INT_MAX;
int n;
void solve() {
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int p1 = 0, p2 = n - 1;

  sort(arr, arr + n);

  debug_itr(arr, arr + n);
  for (int i = 0; i < n; i++) {
    ans =
        min((int)(n - (upper_bound(arr+i-1, arr + n, 2 * arr[i]) - arr) + i), ans);
  }
  cout << ans;
}
int32_t main() {
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
