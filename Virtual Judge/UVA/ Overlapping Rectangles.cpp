// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-460#author=IvanBorquez
// Memory Limit: 1024
// Time Limit: 3000
// Start: Wed 31 Jan 2024 09:46:33 PM UTC
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
  int x1, y1, x2, y2;
  int x12, y12, x22, y22;
  cin >> x1 >> y1 >> x2 >> y2;
  cin >> x12 >> y12 >> x22 >> y22;
  int a, b, c, d;
  a = max(x1, x12);
  b = max(y1, y12);
  c = min(x2, x22);
  d = min(y2, y22);
  if (a >= c || b >= d) {

    cout << "No Overlap\n";
    return;
  }
  cout << a << " " << b << " " << c << " " << d << "\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;

  for (int i = 0; i < n; i++) {

    if (i != 0) {

      cout << "\n";
    }

    solve();
  }

  return 0;
}
