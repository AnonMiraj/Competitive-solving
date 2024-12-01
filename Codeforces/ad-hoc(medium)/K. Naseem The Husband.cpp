// ﷽
// Contest: ad-hoc(medium)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/o09Gu2FpOx/contest/541489/problem/K
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 23 Oct 2024 01:36:08 PM EEST
// Reading Time : 3
// Thinking Time : 2
// Coding Time : 3
// Debug Time :
// Submit Count : 1
// Problem Level : 2
// Category : ad-hoc 
// Comments : simple problem just add all Distinct numbers from the list and substract them from k then add as much small number as you can then sort
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

#define MUTLI_CASE
void solve() {
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;
  map<char, int> m;
  for (auto i : s) {
    m[i]++;
  }
  string ans;
  k-=m.size();
  for (auto &[a,b] : m) {
    ans+=a;
    b--;
  }
  for (auto &[a,b] : m) {
    int sz=min(b,k);
    k-=sz;
    ans+=string(sz,a);
  }
  sort(all(ans));
  cout<<ans<<"\n";
  
  debug(ans);
  
  debug(m);
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--) solve();
  return 0;
}
