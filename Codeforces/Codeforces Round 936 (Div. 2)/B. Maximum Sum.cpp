// ﷽
// Contest: Codeforces Round 936 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1946/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 22 Mar 2024 04:47:53 PM EET
// Reading Time : 2
// Thinking Time : 2
// Coding Time : 12
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
int MOD = 1e9 + 7;

void solve() {
  int n, k;
  int ans = 0;
  cin >> n >> k;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    ans += v[i];
  }
  int ma = v[0];
  int cur = v[0];

  for (size_t i = 1; i < v.size(); ++i) {
    cur = max(v[i], cur + v[i]);
    ma = max(ma, cur);
  }
  if (ma <0 ) {
    ma=0;
  }
  debug(ma);
  ans-=ma;
    ma%=MOD;
  while (k--) {
    ma+=ma;
    ma%=MOD;
  }
  ans= (ans%MOD+ma%MOD)%MOD;
  cout<< (ans<0? ans+MOD : ans )<<endl;
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
