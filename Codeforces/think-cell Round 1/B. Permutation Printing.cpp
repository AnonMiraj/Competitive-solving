// ﷽
// Contest: think-cell Round 1
// Judge: Codeforces
// URL: https://codeforces.com/contest/1930/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 17 Feb 2024 02:51:53 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <ostream>
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
  std::vector<int> even;
  std::vector<int> odd;

  for (int i = 1; i <= n; ++i) {
    if (i % 2 == 0)
      even.push_back(i);
    else
      odd.push_back(i);
  }

  std::sort(even.rbegin(), even.rend());
  std::sort(odd.begin(), odd.end());

  std::vector<int> p;
  for (int i = 0; i < even.size(); ++i) {
    p.push_back(even[i]);
    p.push_back(odd[i]);
  }

  if (n % 2 != 0)
    p.push_back(odd.back());

  for (int num : p) {
    cout << num << " ";
  }
  cout << '\n';
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
