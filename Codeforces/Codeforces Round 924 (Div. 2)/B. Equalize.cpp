// ﷽
// Contest: Codeforces Round 924 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1928/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 11 Feb 2024 10:24:01 AM UTC
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
  int n;
  cin >> n;
  int t;
  set<int> s;
  for (int i = 0; i < n; i++) {
    cin >> t;
    s.insert(t);
  }
  int maxCount = 0;
  int currentCount = 0;
  auto p1 = s.begin(), p2 = s.begin();
  while (p2 != s.end()) {
    if ((*p2 - *p1) < n) {
      currentCount++;
      p2++;
    } else {
      currentCount--;
      p1++;
    }
    maxCount = max(maxCount, currentCount);
  }

  cout << maxCount << "\n";
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
