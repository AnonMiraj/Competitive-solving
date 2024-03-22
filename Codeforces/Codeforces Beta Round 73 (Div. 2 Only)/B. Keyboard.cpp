// ﷽
// Contest: Codeforces Beta Round 73 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/88/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 25 Feb 2024 07:13:43 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  // ios_base::sync_with_stdio(false);                                            \
  // cin.tie(NULL);
#define int long long
using namespace std;
bool lower[35], upper[35];
bool enough(int i1, int j1, int i2, int j2, int x) {
  return (i2 - i1) * (i2 - i1) + (j2 - j1) * (j2 - j1) <= x * x;
}
void solve() {
  int n, m, x;
  cin >> n >> m >> x;
  char s[35][35];
  int i, j, k, l, f = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cin >> s[i][j];
    }
  }
  for (i = 0; i < n; ++i)
    for (j = 0; j < m; ++j) {
      if (s[i][j] == 'S') {
        f = 1;
        for (k = 0; k < n; ++k)
          for (l = 0; l < m; ++l)
            if (s[k][l] != 'S' && enough(i, j, k, l, x))
              upper[s[k][l] - 'a'] = 1;
      } else
        lower[s[i][j] - 'a'] = 1;
    }
  int ans = 0;
  // for (i = 0; i <= 30; ++i)
  // cout << upper[i] << " ";
  // cout << endl;
  int nn;
  cin >> nn;
  string ss;
  cin >> ss;
  for (char &w : ss) {

    cin >> w;
    if (isupper(w)) {
      if (!f || !lower[w - 'A']) {
        cout << -1;
        return;
      }
      if (!upper[w - 'A']) {
        ans++;
      }
    } else {
      if (!lower[w - 'a']) {
        cout << -1;
        return;
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
