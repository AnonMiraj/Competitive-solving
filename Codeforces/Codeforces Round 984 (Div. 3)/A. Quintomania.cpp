// ﷽
// Contest: Codeforces Round 984 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2036/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 02 Nov 2024 04:35:11 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Debug Time : 
// Submit Count : 
// Problem Level : 
// Category : 
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

#define MUTLI_CASE
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
      cin >> v[i];
  }
  for (int i = 1; i < n; i++) {
    
    if(abs(v[i-1]-v[i])!=7&&abs(v[i-1]-v[i])!=5)
    {
      debug(v[i-1]-v[i]);
      cout<<"NO\n";
      return;

    }
  }

      cout<<"YES\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin>>n;
#endif
  while (n--) solve();
  return 0;
}
