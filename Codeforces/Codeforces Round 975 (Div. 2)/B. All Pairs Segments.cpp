// ﷽
// Contest: Codeforces Round 975 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2019/problem/B
// Memory Limit: 256
// Time Limit: 1500
// Start: Fri 27 Sep 2024 06:09:38 PM EEST
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
  int n, q;
  cin >> n >> q;
  vector<int> v(n + 1);
  map<int, int> ans;
  int ma = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  v[n]=v[n-1]+1;
  for (int i = 0; i < n; i++) {
    int cnt = n - 1 + ((i) * (n - i - 1));
    ans[cnt]++;
    debug((i + 1) ,(n - i - 1));
    if (v[i] + 1 != v[i + 1])
      ans[((i + 1) * (n - i - 1))] += (v[i+1] - v[i] - 1);
  }
  debug(ans);

  int qq;
  for (int i = 0; i < q; i++) {
    cin >> qq;
    cout << ans[qq] << " ";
  }
  cout << "\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
