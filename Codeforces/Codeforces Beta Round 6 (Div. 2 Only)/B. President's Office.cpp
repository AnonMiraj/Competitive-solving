// ﷽
// Contest: Codeforces Beta Round 6 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/6/problem/B
// Memory Limit: 64
// Time Limit: 2000
// Start: Tue 20 Feb 2024 04:16:46 PM UTC
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
  int n, m;
  char ch;
  int fr[30] = {};
  cin >> n >> m >> ch;
  fr[ch - 'A'] = 1;
  char arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == ch) {

        if (i < n - 1)
          if (arr[i + 1][j] != '.')
            if ((!fr[arr[i + 1][j] - 'A'])) {
              fr[arr[i + 1][j] - 'A'] = 1;
              ans++;
            }

        if (i > 0)
          if (arr[i - 1][j] != '.')
            if ((!fr[arr[i - 1][j] - 'A'])) {
              fr[arr[i - 1][j] - 'A'] = 1;
              ans++;
            }

        if (j < m - 1)
          if (arr[i][j + 1] != '.')
            if ((!fr[arr[i][j + 1] - 'A'])) {
              fr[arr[i][j + 1] - 'A'] = 1;
              ans++;
            }
        if (j > 0)
          if (arr[i][j - 1] != '.')

            if ((!fr[arr[i][j - 1] - 'A'])) {
              fr[arr[i][j - 1] - 'A'] = 1;
              ans++;
            }
      }
    }
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
