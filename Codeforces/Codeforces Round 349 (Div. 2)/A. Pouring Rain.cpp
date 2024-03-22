// ﷽
// Contest: Codeforces Round 349 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/667/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 01 Feb 2024 09:43:04 PM UTC
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

float pi = atan(1) * 4.f;

void solve() {
  double d, h, v, e;
  double x;
  cin >> d >> h >> v >> e;
  double area = (pi * d * d) / 4.0;
  x = (h / (((4 * v) / (pi * d * d)) - e));
  if ((v / area) <= e) {
    cout << "NO";

    return;
  }
  cout <<setprecision(15)<<fixed<< "YES\n";
  cout << x;
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
