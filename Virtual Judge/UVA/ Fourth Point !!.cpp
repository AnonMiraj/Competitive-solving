// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-10242
// Memory Limit: 1024
// Time Limit: 3000
// Start: Fri 02 Feb 2024 09:27:45 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <math.h>
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

struct Point {
  double x, y;

  Point(double _x = 0.0, double _y = 0.0) : x(_x), y(_y) {}

  // Overloading addition operator
  Point operator+(const Point &other) const {
    return Point(x + other.x, y + other.y);
  }

  // Overloading subtraction operator
  Point operator-(const Point &other) const {
    return Point(x - other.x, y - other.y);
  }

  // Overloading equality operator
  bool operator==(const Point &other) const {
    // Compare x and y coordinates with a small tolerance for floating-point
    // comparison
    return std::abs(x - other.x) < 1e-6 && std::abs(y - other.y) < 1e-6;
  }
};
void solve() {
  double x1, y1;
  while (cin >> x1 >> y1) {
    Point a(x1, y1);

    cin >> x1 >> y1;
    Point b(x1, y1);
    cin >> x1 >> y1;
    Point c(x1, y1);
    cin >> x1 >> y1;
    Point d(x1, y1);
    if (a == c) {

      cout << setprecision(3) << fixed << b.x + d.x - a.x << " "
           << b.y + d.y - a.y << "\n";
    } else if (a == d) {
      cout << setprecision(3) << fixed << c.x + b.x - d.x << " "
           << c.y + b.y - d.y << "\n";

    } else if (b == c) {
      cout << setprecision(3) << fixed << a.x + d.x - c.x << " "
           << a.y + d.y - c.y << "\n";

    } else if (b == d) {
      cout << setprecision(3) << fixed << a.x + c.x - d.x << " "
           << a.y + c.y - d.y << "\n";
    }
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
