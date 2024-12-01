// ﷽
// Contest: QCPC 2024 (Mirror)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/551747/problem/I
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 14 Oct 2024 12:04:24 PM EEST
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
  int s, n;
  cin >> s >> n;
  vector<int> m;
  vector<int> c;

  m.push_back(1);
  c.push_back(0);
  int t;
  for (int i = 0; i < n; i++) {
    cin >> t;
    m.push_back(t);
    cin >> t;
    c.push_back(t);
  }

  m.push_back(s + 1);
  c.push_back(0);
  int sum = 0;
  int v = 0;
  debug(m);
  debug(c);
  for (int i = 1; i <= n+1; i++) {
    v += c[i];
    sum+=v*(m[i]-m[i-1]);
    debug(m[i],m[i-1],v,v*(m[i]-m[i-1]));


  }
  // sum += v*s;
  cout << sum << endl;
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
