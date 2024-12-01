// ﷽
// Contest: Codeforces Round 976 (Div. 2) and Divide By Zero 9.0
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2020/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 30 Sep 2024 06:23:13 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;
void solve() {
  int n, k;
  cin >> n >> k;
  int ans = 0;
  int r;
  if(k==1)
  {
  cout << n<< "\n";
  return;
  }
  while (n !=0) {
    debug(n);
    r = n % k;
    ans += r;
    n /= k;
  }

  cout << ans<< "\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
