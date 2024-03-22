// ﷽
// Contest: Codeforces Beta Round 93 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/127/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 31 Jan 2024 08:08:18 PM UTC
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
double calc(int x1, int y1, int x2, int y2) {
  return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void solve() {
  int n, k;
  cin >> n >> k;
  double sum = 0;
  int x1, x2, y1, y2;
  cin >> x2 >> y2;
  for (int i = 1; i < n; i++) {

    cin >> x1 >> y1;
    sum += calc(x1, y1, x2, y2);
    x2 = x1;
    y2 = y1;
  }
  cout<<fixed<<setprecision(9)<<(sum/50)*k;
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
