// ﷽
// Contest: URAL
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/URAL-1607#author=0
// Memory Limit: 64
// Time Limit: 500
// Start: Wed 14 Feb 2024 07:01:04 PM UTC
//

#include <cmath>
#include <iostream>
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
// #define int long long
using namespace std;

void solve() {
  float a, b, c, d;
  cin >> a >> b >> c >> d;
  float x = ((c - a) / (b + d));
  if (round(x) < x) {

    cout << c - d * round(x);
    return;
  }
  cout << a + b * round(x);
}
int main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
