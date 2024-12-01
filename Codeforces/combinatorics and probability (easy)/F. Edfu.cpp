// ﷽
// Contest: combinatorics and probability (easy)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/o09Gu2FpOx/contest/542182/problem/F
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 22 Oct 2024 01:24:26 PM EEST
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
  int n;
  cin >> n;
  int both = 0;
  int ot = 0, mt = 0, t;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    ot += v[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> t;
    mt += t;
    if (t && t == v[i]) both++;
  }
  
  debug(mt, ot, both);
  cout << fixed <<setprecision(6)<< (ot?(double)(ot-both) / ot * 100.:0)<<" ";
  cout << (mt?(double)(mt-both) / mt * 100.:0)<<"\n";
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
