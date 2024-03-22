// ﷽
// Contest: Sheet #7 (Recursion)
// Judge: Codeforces
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 19 Mar 2024 12:26:13 AM EET
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
  int n, w;
  cin >> n >> w;

  int mem[w + 1] = {};
  pair<int, int> arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i].first;
    cin >> arr[i].second;
  }
  for (int i = 0; i < n; i++) {
    for (int j = w; j >= arr[i].first; j--) {
      mem[j] = max(mem[j], arr[i].second + mem[j - arr[i].first]);
    }
  }
  cout << mem[w];
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
