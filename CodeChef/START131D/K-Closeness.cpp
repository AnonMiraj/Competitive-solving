// ﷽
// Contest: START131D
// Judge: CodeChef
// URL: https://www.codechef.com/START131D/problems/KCLOSE
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 24 Apr 2024 05:01:30 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
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
int solve2(int n, int k, int *temparr) {

  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
    arr[i] = temparr[i];
  sort(arr, arr + n, greater<>());
  for (int i = 1; i < n; i++) {
    while (arr[i] < arr[0]) {
      if (abs(arr[0] - (arr[i] + k)) >= arr[0] - arr[i])
        break;
      else
        arr[i] += k;
    }
  }
  sort(arr, arr + n, greater<>());

  debug_itr(arr, arr + n);
  return arr[0] - arr[n - 1];
}

int solve(int n, int k, int *temparr) {
  cin >> n >> k;
  int mi = INT_MAX, ma = -1;
  int arr[n];
  for (int i = 0; i < n; i++) {
    arr[i] = temparr[i];
    ma = max(arr[i], ma);
  }

  debug(ma);
  debug_itr(arr, arr + n);
  for (int i = 0; i < n; i++) {
    arr[i] += k * ((ma - arr[i]) / k);
  }
  debug_itr(arr, arr + n);

  sort(arr, arr + n);

  for (int i = 0; i < n - 1; i++) {
    mi = min(mi, arr[n - 1] - arr[i]);
    debug(mi);
    swap(arr[n - 1], arr[i]);
    arr[n - 1] += k;
    debug_itr(arr, arr + n);
  }
  mi = min(mi, arr[n - 1] - arr[0]);
  return mi;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n, k;
  while (true) {
    n = rand() % 10 + 1;
    k = rand() % 5 + 1;
    int arr[n];
    for (int i = 0; i < n; i++) {
      arr[i] = rand() % 10 + 1;
    }

    int ans = solve2(n, k, arr);
    int eans = solve(n, k, arr);
    if (ans != eans) {
      cout << ans << "\n";
      cout << eans << "\n";
      cout << n << " " << k << "\n";
      for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
      }
      return 0;
    }
  }
  return 0;
}
