// ﷽
// Contest: Educational Codeforces Round 1
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/598/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 19 Sep 2024 05:00:01 PM EEST
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
  string s;
  cin>>s;
  int q;

  cin>>q;

  int l,r,k;
  int sz;
  while(q--)
  {
    cin>>l>>r>>k;
    l--;
    r--;

    sz=r-l+1;
    k=k%(sz);
    rotate(s.begin() + l, s.begin() + r + 1 - k, s.begin() + r + 1);
    debug(s);

  }
  cout<<s;





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
