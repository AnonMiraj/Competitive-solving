// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1081
// Memory Limit: 512
// Time Limit: 1000
// Start: Fri 12 Jul 2024 06:24:36 PM EEST
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

using namespace std;

int n = 1e6;
vector<vector<int>> divs;

int arr[(int)1e6 + 19];
void solve() {
  int m;
  cin >> m;
  int t;
  for (int i = 0; i < m; i++) {
    cin >> t;
    for (int div = 1; div*div <= t; div++) {

      if (t % div == 0) {
        arr[div]++;
        if (div != t / div) {
          arr[t / div]++;
        }
      }
    }
  }
  int ans = 0;
  int i = 0;
  for (int i = n; i > 0; i--) {
    if (arr[i] >= 2) {
      ans = i;
      break;
    }
  }
  cout << ans;
  /*for(int i=0;i<m;i++)*/
  /*{*/
  /*}*/
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
