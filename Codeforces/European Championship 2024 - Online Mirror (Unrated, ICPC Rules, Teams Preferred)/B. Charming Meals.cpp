// ﷽
// Contest: European Championship 2024 - Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1949/problem/B?csrf_token=d9e8498e0beefb58aef31ff456664388
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 29 Mar 2024 09:12:01 PM EET
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <climits>
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = -1;
    for (int s = 0; s < n; s++) {
      int cur = INT_MAX;
      for (int i = 0; i < n; i++) {
        cur = min(cur, abs(a[i] - b[(i + s) % n]));
      }
      ans = max(ans, cur);
    }
    cout<<ans<<endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
