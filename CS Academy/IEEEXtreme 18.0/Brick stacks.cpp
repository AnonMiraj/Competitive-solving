// ﷽
// Contest: IEEEXtreme 18.0
//
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/brick-stacks/
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 26 Oct 2024 11:06:07 PM EEST
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
  int n,x;cin>>n>>x;
  vector<int> arr(n);
  for(auto&it:arr)cin>>it;
  sort(all(arr));

  vector<vector<int>>res;
  for(int i=0;i<n;++i){

  }
  debug(arr);
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

  while (n--) solve();
  return 0;
}