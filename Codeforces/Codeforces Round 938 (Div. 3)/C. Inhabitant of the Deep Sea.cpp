// ﷽
// Contest: Codeforces Round 938 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1955/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 08 Apr 2024 05:16:39 PM EET
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

void solve() {
  int n, k, ans = 0;
  cin >> n >> k;
  int arr[n];
  int p1 = 0, p2 = n - 1, su = 0;

  for (int i = 0; i < n; i++) {

    cin >> arr[i];
    su += arr[i];
  }
  int x = (k + 1) / 2;
  if (su <= k) {
    cout << n << "\n";
    return;
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] <= x) {
      x -= arr[i];
      ans++;

    } else {
      break;
    }
  }
  x = (k) / 2;
  for (int i = n - 1; i >= 0; i--) {
    if (arr[i] <= x) {
      x -= arr[i];
      ans++;

    } else {
      break;
    }
  }

  cout << ans << "\n";
  debug_itr(arr, arr + n);
  debug(k, p1, p2);
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
