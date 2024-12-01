// ﷽
// Contest: Codeforces Round 979 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2030/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 19 Oct 2024 05:05:15 PM EEST
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
  vector<int> v(n);
  int ma=-1;
  int mi=INT_MAX;
  for (int i = 0; i < n; i++) {
      cin >> v[i];
      ma=max(ma,v[i]);
      mi=min(mi,v[i]);
  }
  cout<<(ma-mi)*(n-1)<<"\n";

}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin>>n;
  while (n--) solve();
  return 0;
}
