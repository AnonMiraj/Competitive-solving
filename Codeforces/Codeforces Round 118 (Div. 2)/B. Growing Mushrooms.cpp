// ﷽
// Contest: Codeforces Round 118 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/186/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 07 Apr 2024 08:55:45 PM EET
// Reading Time : 3
// Thinking Time :  1
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <functional>
#include <iomanip>
#include <ios>
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
bool comp(pair<long double, int> a, pair<long double, int> b) {
  if (a.first != b.first)
    return a.first > b.first;
  else
    return a.second < b.second;
}
void solve() {
  int n;
  double t1, t2;
  double k;
  cin >> n >> t1 >> t2 >> k;
  k /= 100;
  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  vector<pair<double, int>> ans;
  double aa, bb;
  for (int i = 0; i < n; i++) {
    aa = a[i] * t1 + b[i] * t2 - (k * (a[i] * t1));
    bb = b[i] * t1 + a[i] * t2 - (k * (b[i] * t1));
    debug(aa, bb, k);
    ans.push_back({max(aa, bb), i + 1});
  }
  debug(ans);
  sort(ans.begin(), ans.end(), comp);
  for (int i = 0; i < n; i++) {
    cout << ans[i].second << " " << fixed << setprecision(2) << ans[i].first
         << "\n";
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
