// ﷽
// Contest: Codeforces Round 204 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/352/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 25 Apr 2024 12:39:12 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
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
#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  map<int, vector<int>> arr;
  int t;
  for (int i = 0; i < n; i++) {
    cin >> t;
    arr[t].push_back(i);
  }
  map<int, int> ans;
  int mi = -1;
  for (auto [a, b] : arr) {
    if (b.size() == 1) {
      ans[a] = 0;
    } else {
      mi = b[1] - b[0];

      for (int i = 1; i < b.size(); i++) {
        if (b[i] - b[i - 1] != mi) {
          goto la;
        }
      }
      ans[a] = mi;
    }
  la:;
  }
  cout << ans.size() << "\n";
  for (auto [a, b] : ans) {
    cout << a << " " << b << "\n";
  }
  debug(arr);
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
