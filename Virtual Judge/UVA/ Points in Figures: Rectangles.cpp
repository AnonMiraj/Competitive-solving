// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-476#author=rupak_biswas
// Memory Limit: 1024
// Time Limit: 3000
// Start: Wed 31 Jan 2024 08:35:54 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
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
bool isIn(float x, float y, float x1, float y1, float x2, float y2) {
  return (x > x1 && x < x2) && (y > y2 && y < y1);
}
void solve() {
  char r;
  float x1, x2, y1, y2;
  vector<pair<float, float>> v1;
  vector<pair<float, float>> v2;
  cin >> r;

  while (r == 'r') {
    cin >> x1 >> y1 >> x2 >> y2;
    v1.emplace_back(make_pair(x1, y1));
    v2.emplace_back(make_pair(x2, y2));

    cin >> r;
  }
  int cnt = 1;
  cin >> x1 >> y1;
  while (x1 != 9999.9f) {

    bool iIN = false;
    bool did = false;
    for (size_t i = 0; i < v1.size(); i++) {
      iIN = isIn(x1, y1, v1[i].first, v1[i].second, v2[i].first, v2[i].second);
      if (iIN) {
        cout << "Point " << cnt << " is contained in figure " << i+1 << '\n';
        did = 1;
      }
    }
    if (!did) {
      cout << "Point " << cnt << " is not contained in any figure\n";
    }
    cnt++;
    cin >> x1 >> y1;
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
