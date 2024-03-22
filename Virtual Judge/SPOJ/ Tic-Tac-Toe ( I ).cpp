// ﷽
// Contest: SPOJ
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/SPOJ-TOE1
// Memory Limit: 1536
// Time Limit: 1000
// Start: Wed 21 Feb 2024 11:40:46 AM UTC
//
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  string s[3];
  int oo = 0, xx = 0, winx = 0, wino = 0;
  cin >> s[0];
  cin >> s[1];
  cin >> s[2];
  int winh = 0, winv = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (s[i][j] == 'O') {
        oo++;
      } else if (s[i][j] == 'X') {
        xx++;
      }
    }
  }
  if (s[0][0] == s[1][1] && s[1][1] == s[2][2]) {
      if (s[0][0] == 'X') {
        winx++;
      } else if (s[0][0] == 'O') {
        wino++;
      }
    }
    if (s[2][0] == s[1][1] && s[1][1] == s[0][2]) {
      if (s[2][0] == 'X') {
        winx++;
      } else if (s[2][0] == 'O') {
        wino++;
      }
    }
  for (int i = 0; i < 3; i++) {
    if (s[0][i] == s[1][i] && s[1][i] == s[2][i]) {
      if (s[0][i] == 'X') {
        winx++;
      } else if (s[0][i] == 'O') {
        wino++;
      }
    }
    if (s[i][0] == s[i][1] && s[i][1] == s[i][2]) {
      if (s[i][0] == 'X') {
        winx++;
      } else if (s[i][0] == 'O') {
        wino++;
      }
    }
  }
  if (wino && winx) {
    cout << "no\n";
    return;
  }
  if (wino && xx != oo) {
    cout << "no\n";
    return;
  }
  if (winx && xx - 1 != oo) {
    cout << "no\n";
    return;
  }
  if (oo > xx || abs(xx - oo) > 1) {
    cout << "no\n";
    return;
  }
  cout << "yes\n";
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
