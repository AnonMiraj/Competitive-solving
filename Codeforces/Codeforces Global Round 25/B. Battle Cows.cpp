// ﷽
// Contest: Codeforces Global Round 25
// Judge: Codeforces
// URL: https://codeforces.com/contest/1951/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 06 Apr 2024 05:56:41 PM EET
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
  int n, k;
  cin >> n >> k;
  k--;
  vector<int> arr(n);
  int ind = -1;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < k; i++) {
    if (arr[k] < arr[i]) {
      ind = i;
      break;
    }
  }
  if (ind == -1) {
    ind = 0;
  }
  int ans1 = 0, ans2 = 0;

  if (ind >= 1) {
    ans1++;
  }
  swap(arr[k], arr[ind]);
  for (int i = ind + 1; i < n; i++) {
    if (arr[i] < arr[ind]) {
      ans1++;
    } else {
      break;
    }
  }
  swap(arr[k], arr[ind]);

  swap(arr[k], arr[0]);

  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[0]) {
      ans2++;
    } else {
      break;
    }
  }

  cout << max(ans1, ans2) << '\n';
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
