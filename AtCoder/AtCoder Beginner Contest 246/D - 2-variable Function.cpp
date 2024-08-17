// ﷽
// Contest: AtCoder Beginner Contest 246
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc246/tasks/abc246_d
// Memory Limit: 1024
// Time Limit: 2000
// Start: Fri 24 May 2024 04:50:58 AM EEST
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int unsigned long long

using namespace std;
int f(int a, int b) { return b * b * b + a * b * b + a * a * b + a * a * a; }
void solve() {
  int n;
  cin >> n;
  int i = 0, j = 1e6;
  int x = (int)-1;
  if (n == 0) {
    cout << 0;
    return;
  }
  while (i <= j) {
    int cf = f(i, j);
    if (cf >= n)
      x = min(x, cf), j--;
    else
      i++;
  }
  cout << x;
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
