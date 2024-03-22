// Problem: C. Yet Another Permutation Problem
// Contest: Codeforces Round 893 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1858/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 15 Aug 2023 03:23:10 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
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
  bool map[n + 1] = {};
  cout << 1 << " ";
  int x = 2;

  for (int i = 2; i <= n; i++) {
    if (map[i] == 0) {
      cout << i << " ";
      map[i] = 1;
    }
    while (i * x <= n) {
      if (map[i * x] == 0)
        cout << i * x << " ";
      map[i * x] = 1;
      x *= 2;
    }
    x = 2;
  }
  cout << endl;
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
