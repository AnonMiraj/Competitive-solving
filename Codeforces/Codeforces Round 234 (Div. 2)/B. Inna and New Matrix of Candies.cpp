// ﷽
// Contest: Codeforces Round 234 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/400/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 29 Feb 2024 04:21:12 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <pthread.h>
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
  int n, m;
  cin >> n >> m;
  string s;
  set<int >ss;
  int ans = INT_MIN ;
  while (n--) {
    cin >> s;
    if (s.find("S") < s.find("G") ) {
      cout << -1;
      return;
    } else {
      ss.insert(s.find("S") - s.find("G"));
    }
  }
  cout << ss.size();
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
