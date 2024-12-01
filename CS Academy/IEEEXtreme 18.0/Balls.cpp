// ﷽
// Contest: IEEEXtreme 18.0
//
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/balls/
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 26 Oct 2024 07:38:55 PM EEST
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


int n, k;
vector<int> arr;
int inc_exe(int idx = 0, int d = 1, int sign = -1) {
  if (idx == k) {
    if (d == 1) return 0;
    return sign * n / d;
  }
  return inc_exe(idx + 1, d, sign) + inc_exe(idx + 1, d * arr[idx], sign * -1);
}

void solve() {
  cin >> n >> k;
  arr = vector<int>(k);
  for (int i = 0; i < k; i++) {
    cin >> arr[i];
    if (arr[i] == 1) {
      cout << n;
      return;
    }
  }

  cout << n - inc_exe();
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
