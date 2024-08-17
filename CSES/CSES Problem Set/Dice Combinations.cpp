// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1633
// Memory Limit: 512
// Time Limit: 1000
// Start: Wed 03 Apr 2024 11:57:18 PM EET
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

int n, ans = 0, MOD = 1e9 + 7;
int dp[1000006] = {};
int arr[6] = {1, 2, 3, 4, 5, 6};
int bf(int a) {

  if (dp[a]) {

    return dp[a];
  }

  for (int i = 0; i < 6; i++) {
    if (a - arr[i] >= 0) {
      dp[a] += bf(a - arr[i]);
      dp[a] %= MOD;
    }
  }
  return dp[a];
}

void solve() {
  dp[0] = 1;
  cin >> n;
  cout << bf(n);
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  solve();
  return 0;
}
