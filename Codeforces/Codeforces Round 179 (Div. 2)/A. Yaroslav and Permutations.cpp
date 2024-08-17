// ﷽
// Contest: Codeforces Round 179 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/296/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 16 Apr 2024 05:31:58 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <functional>
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
  int arr[1001] = {};
  int t;
  for (int i = 0; i < n; i++) {
    cin >> t;
    arr[t]++;
    if (arr[t] > (n / 2 + (n % 2))) {
      cout << "NO";
      return;
    }
  }
  cout<<"YES";
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
