// ﷽
// Contest: START131D
// Judge: CodeChef
// URL: https://www.codechef.com/START131D/problems/ENV
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 24 Apr 2024 06:11:55 PM EET
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
  int n;
  int s = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int MOD = 1e9 + 7;
  sort(arr, arr + n);
  s = arr[0];
  int ma;
  for (int i = 1; i < n; i++) {
    if (arr[i] == 1) {
      s += 1;

    } else {

      s *= arr[i];
      s %= MOD;
    }
  }
  cout << s % MOD << "\n";
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
