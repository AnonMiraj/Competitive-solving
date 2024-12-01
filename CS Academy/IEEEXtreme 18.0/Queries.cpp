// ﷽
// Contest: IEEEXtreme 18.0
//
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/queries/
// Memory Limit: 256
// Time Limit: 600
// Start: Sat 26 Oct 2024 02:02:56 PM EEST
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
  int n, q; cin >> n >> q;
  vector<int> p(n);
  vector<int> a(n, 0);
  for(int i = 0 ; i < n ; i++) {
    cin >> p[i];
  }
  for(int i = 0; i < q; i++) {
    int ti; cin >> ti;
    if (ti==0) {
      int l, r, c; cin >> l >> r >> c;
      for(int j = l-1; j < r; j++) {
        a[j]+=c;
      }
      continue;
    }
    if (ti==1) {
      int l, r, c; cin >> l >> r >> c;
      for(int j = l-1; j < r; j++) {
        a[p[j]-1]+=c;
      }
      continue;
    }
    if (ti==2) {
      int l, r; cin >> l >> r;
      int sum = 0;
      for(int j = l-1; j < r; j++) {
        sum += a[j];
      }
      cout << sum << endl;
      continue;
    }
    if (ti==3) {
      int l, r; cin >> l >> r;
      int sum = 0;
      for(int j = l-1; j < r; j++) {
        sum += a[p[j]-1];
      }
      cout << sum << endl;
      continue;
    }
  }
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  //cin>>n;
#endif
  while (n--) solve();
  return 0;
}
