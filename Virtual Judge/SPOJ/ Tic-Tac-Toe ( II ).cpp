// ﷽
// Contest: SPOJ
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/SPOJ-TOE2
// Memory Limit: 1536
// Time Limit: 206
// Start: Thu 22 Feb 2024 05:43:05 PM UTC
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

void solve(string ss) {
  string s[3];
  int oo = 0, xx = 0, winx = 0, wino = 0;
  // cin >> s[0];
  // cin >> s[1];
  // cin >> s[2];
  s[0] = ss.substr(0, 3);
  s[1] = ss.substr(3, 3);
  s[2] = ss.substr(6, 3);
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
    cout << "invalid\n";
    return;
  }
  if (wino && xx != oo) {
    cout << "invalid\n";
    return;
  }
  if (winx && xx - 1 != oo) {
    cout << "invalid\n";
    return;
  }
  if (oo > xx || abs(xx - oo) > 1) {
    cout << "invalid\n";
    return;
  }
  
  if (oo+ xx<9 && !(winx+wino)) {

    cout << "invalid\n";
    return;
  }
  cout << "valid\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  string s;

  while (cin >> s && s != "end")
    solve(s);
  return 0;
}
