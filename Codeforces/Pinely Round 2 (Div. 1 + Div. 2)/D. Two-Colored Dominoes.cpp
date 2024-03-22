// ﷽
// Contest: Pinely Round 2 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1863/problem/D
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 30 Aug 2023 03:47:03 PM UTC
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
  int row, col;
  cin >> row >> col;
  char arr[row][col];
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> arr[i][j];
    }
  }
  bool x = false;
  for (int i = 0; i < row; i++) {
    x = !x;
    for (int j = 0; j < col; j++) {
      if (arr[i][j] != '.') {
        if (x) {
          arr[i][j] = 'W';
        } else {
          arr[i][j] = 'B';
        }
        x = !x;
      }
    }
  }
  int cb = 0;
  for (int i = 0; i < row; i++) {
    cb = 0;
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == '.') {
        cb++;
      }
    }
    // cout<<cb<<endl;
    if ((col - cb) & 1) {
      cout << -1 << endl;
      return;
    }
  }
  for (int i = 0; i < col; i++) {
    cb = 0;
    for (int j = 0; j < row; j++) {
      if (arr[j][i] == '.') {
        cb++;
      }
    }
    // cout<<cb<<endl;
    if ((row - cb) & 1) {
      cout << -1 << endl;
      return;
    }
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j];
    }

    cout << endl;
  }
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
