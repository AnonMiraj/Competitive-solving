// ﷽
// Contest: Codeforces Round 139 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/225/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 09 Apr 2024 11:55:11 PM EET
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

int n, m, x, y;
int mmm[1001] = {};
int mem[1001][1001][3];
int bf(int ind, int wid, int last) {
  if (ind == m) {
    if (wid < x || wid > y) {
      return 10000 * 1000;
    }
    return 0;
  }
  if (mem[ind][wid][last]!=-1) {
    return mem[ind][wid][last];
    
  }

  int a = 10000 * 1000;
  int b = 10000 * 1000;
  if (ind == 0 || (last == 0 && wid + 1 <= y) || (last == 1 && wid >= x)) {
    a = mmm[ind] + bf(ind + 1, (last == 0) ? wid + 1 : 1, 0);
  }

  if (ind == 0 || (last == 1 && wid + 1 <= y) || (last == 0 && wid >= x)) {
    b = n - mmm[ind] + bf(ind + 1, (last == 1) ? wid + 1 : 1, 1);
  }
  debug(a, b);

  return mem[ind][wid][last]=min(a, b);
}
void solve() {
  cin >> n >> m >> x >> y;
  char arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 1001; i++) {
    for (int j = 0; j < 1001; j++) {
      mem[i][j][0]=-1;
      mem[i][j][1]=-1;
      mem[i][j][2]=-1;
    }
  }
  int d;
  for (int i = 0; i < m; i++) {
    d = 0;
    for (int j = 0; j < n; j++) {
      mmm[i] += (arr[j][i] == '#');
    }
  }
  cout << bf(0, 0, 2);
  debug_itr(mmm, mmm + m);
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
