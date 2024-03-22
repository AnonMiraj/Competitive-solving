// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-10611#author=BUP_CPPS
// Memory Limit: 1024
// Time Limit: 3000
// Start: Sat 03 Feb 2024 03:38:23 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
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
  int n, a;
  cin >> n;
  vector<int> v1(n);
  for (auto &i : v1) {
    cin >> i;
  }
  cin >> a;
  vector<int> v2(a);
  for (auto &i : v2) {
    cin >> i;
  }
  for (size_t i = 0; i < a; i++) {

    vector<int>::iterator lower, upper;
    lower = lower_bound(v1.begin(), v1.end(), v2[i]);
    upper = upper_bound(v1.begin(), v1.end(), v2[i]);

    int ans1 = v1[lower - v1.begin() - 1];
    int ans2 = v1[upper - v1.begin()];
    if (lower - v1.begin() - 1 < 0) {
      cout << "X"
           << " " << ans2 << "\n";
    } else if (upper - v1.begin() >= n)
      cout << ans1 << " "
           << "X"
           << "\n";
    else
      cout << ans1 << " " << ans2 << "\n";
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
