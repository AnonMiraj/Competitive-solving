// ﷽
// Contest: CodeTON Round 6 (Div. 1 + Div. 2, Rated, Prizes!)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/1870/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 16 Sep 2024 06:16:50 PM EEST
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
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> v(n);
  int nn = 0;

  if(k<x)
  {
    cout<<-1<<endl;
  }
  for (int i = 0; i < n; i++) {
    if (nn >= k)
      v[i] = (x!=k? x:k-1);
    else
      v[i] = nn;
    nn++;
  }
  if(k>n)
    cout<<-1<<endl;
  else 
    cout<<accumulate(all(v),0)<<endl;
  debug(v);
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
