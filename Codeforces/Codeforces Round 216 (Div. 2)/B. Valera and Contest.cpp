// ﷽
// Contest: Codeforces Round 216 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/369/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 25 May 2024 02:39:14 AM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

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

void solve() {
  int n,k,l,r,sa,sk;
  cin>>n>>k>>l>>r>>sa>>sk;
  int dif=r-l;
  int su=n*r;
  vector<int> v(n,r);
  debug(v,dif,su);

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
