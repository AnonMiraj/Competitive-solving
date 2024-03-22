// ﷽
// Contest: Codeforces Beta Round 72 (Div. 1 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/83/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 01 Jan 2024 04:59:10 PM UTC
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

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  int cnt = 0, p = -1;

  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    if (p != x)
      cnt = 1, p = x;
    else
      cnt++;
    ans += cnt;
  }
  cout << ans;
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
