// ﷽
// Contest: Codeforces Round 345 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/651/problem/C
// Memory Limit: 256
// Time Limit: 3000
// Start: Thu 26 Sep 2024 03:24:18 AM EEST
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
  map<int, int> mx;
  map<int, int> my;
  map<pair<int, int>, int> mp;
  int ans = 0;
  int x, y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    ans+=mx[x]+my[y]-mp[{x,y}];

    mx[x]++;
    my[y]++;
    mp[{x, y}]++;
  }
  cout<<ans;
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
