// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-10865
// Memory Limit: 1024
// Time Limit: 3000
// Start: Fri 26 Apr 2024 08:35:01 AM EEST
// Reading Time :  6m
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

void solve() {
  int n;
  int x, y;
  int arr[200000][2];
  while (cin >> n && n) {
    for (int i = 0; i < n; i++) {
      cin >> x >> y;
      arr[i][0] = x;
      arr[i][1] = y;
    }
    int mid = n / 2;
    int dx, dy;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
      dx = arr[mid][0] - arr[i][0];
      dy = arr[mid][1] - arr[i][1];
      if (!dx || !dy) {
        continue;
      }
      if (dx * dy > 0) {
        a++;
      } else {
        b++;
      }
    }
    cout << a << " " << b << "\n";
  }
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
