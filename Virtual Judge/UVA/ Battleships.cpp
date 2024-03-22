// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-11953#author=0
// Memory Limit: 1024
// Time Limit: 1000
// Start: Fri 26 Jan 2024 06:52:49 AM UTC
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

void solve(int c) {
  int n;
  cin >> n;
  string s[n];
  for (auto &i : s) {
    cin >> i;
  }
  int i = 0, j = 0, ans = 0;
  bool found = false;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {

      if (s[i][j] != '.') {
        if (s[i][j] == 'x') {
          found = 1;
          s[i][j] = '.';
        }
        int k = i + 1, l = j;
        while (k != n && s[k][l] != '.') {
          if (s[k][l] == 'x') {
            found = 1;
          }
          s[k][l] = '.';
          k++;
        }
        k = i, l = j + 1;
        while (l != n && s[k][l] != '.') {
          if (s[k][l] == 'x') {
            found = 1;
          }
          s[k][l] = '.';
          l++;
        }
      }
      if (found) {
        ans++;
        found = 0;
      }
    }
  }
  
  // for (auto &i : s) {
    // cout << i<<endl;
  // }
  cout << "Case " << c + 1 << ": ";
  cout << ans << "\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;

  for (int i = 0; i < n; i++) {
    solve(i);
  }
  return 0;
}
