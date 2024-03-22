// ﷽
// Contest: Codeforces Round 176 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/287/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 09 Feb 2024 03:38:39 PM UTC
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
  string s[4];
  for (auto &i : s) {
    cin >> i;
  }

  // for (auto &i : s) {
  //   cout << i;
  // }
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      ans = 0;
      if (s[i][j] == '#') {
        ans++;
      }
      if (s[i][j + 1] == '#') {
        ans++;
      }

      if (s[i + 1][j] == '#') {
        ans++;
      }

      if (s[i + 1][j + 1] == '#') {
        ans++;
      }
      if (ans != 2) {
        cout << "YES";
        return;
      }
    }
  }
  cout << "NO";
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
