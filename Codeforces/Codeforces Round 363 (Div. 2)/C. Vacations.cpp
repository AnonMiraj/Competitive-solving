// ﷽
// Contest: Codeforces Round 363 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/699/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 11 Mar 2024 02:03:13 AM EET
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

//  0 0
//  0 1
//  1 0
//  1 1
void solve() {
  int n;
  cin >> n;
  int dp[101][3] = {{0, 0, 0}};
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    dp[i][0] = *min_element(dp[i - 1], dp[i - 1] + 3) + 1;
    if (a == 1 || a == 3) {
      dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
    } else
      dp[i][1] = dp[i - 1][1] + 1;
    if (a == 2 || a == 3) {
      dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
    } else
      dp[i][2] = dp[i - 1][2] + 1;
  }
  cout << *min_element(dp[n], dp[n] + 3);
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
