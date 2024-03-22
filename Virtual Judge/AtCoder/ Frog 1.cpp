// ﷽
// Contest: AtCoder
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/AtCoder-dp_a#author=0
// Memory Limit: 1024
// Time Limit: 2000
// Start: Wed 20 Mar 2024 11:19:13 PM EET
// Reading Time : 1
// Thinking Time :
// Coding Time : 40
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
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

int n;
int arr[100000];
int ans = 0;
vector<int> dp(100000,INT_MAX) ;
int d(int i) {
  if (i == 0) {
    return 0;
  }
  if (dp[i]!=INT_MAX) {
    return dp[i];
  }

  return dp[i] = min((d(i - 1) + abs(arr[i] - arr[i - 1]) ),
                     (i != 1 ? d(i - 2) + abs(arr[i] - arr[i - 2]) : INT_MAX));
}
void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << d(n - 1);
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  solve();
  return 0;
}
