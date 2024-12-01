// ﷽
// Contest: QCPC 2024 (Mirror)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/551747/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 14 Oct 2024 12:27:02 PM EEST
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
  int n, p;
  cin >> n >> p;
  vector<long long> result(n,1);
  int pad = 2 * p;
  while (n--) {
    int x, y, z;
    cin >> x >> y >> z;
    result[0] *= (x-pad);
    result[1] *= (y-pad);
    result[2] *= (z-pad);
  }
  cout << result[0] + result[1] + result[2];
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}
