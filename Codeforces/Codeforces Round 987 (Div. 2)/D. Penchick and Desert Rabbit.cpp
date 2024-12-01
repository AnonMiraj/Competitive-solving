// ﷽
// Contest: Codeforces Round 987 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2031/problem/D
// Memory Limit: 256
// Time Limit: 3000
// Start: Fri 15 Nov 2024 03:48:01 PM EET
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

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> v-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

#define MUTLI_CASE

void solve() {
  int n = 5e5;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  /*v[0] = 2;*/
  /*int even = 4, odd = 1;*/
  /*for (int i = 1; i <= n; ++i) {*/
  /*  if (i % 2 != 0) {*/
  /*    v[i] = even;*/
  /*    even += 2;*/
  /*  } else {*/
  /*    v[i] = odd;*/
  /*    odd += 2;*/
  /*  }*/
  /*}*/
  debug(v);
  vector<int> minv(n);
  vector<int> maxv(n, -1);
  maxv[0] = 0;
  int maind = 0;
  for (int i = 1; i < n; i++) {
    if (v[i] > v[maxv[i - 1]]) {
      debug(v[i], v[maxv[i - 1]]);
      maind = i;
    }
    maxv[i] = maind;
  }
  minv[n - 1] = v[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    minv[i] = min(minv[i + 1], v[i]);
  }

  debug(minv);
  for (int i = 0; i < n; i++) {
    int l = i + 1, h = n - 1, ans = -1;

    while (l <= h) {
      int mid = (l + h) / 2;

      if (minv[mid] < v[i]) {
        ans = mid;
        l = mid + 1;
      } else
        h = mid - 1;
    }

    if (ans == -1) ans = i;
    minv[i] = ans;
  }
  debug(v);
  debug(minv);
  debug(maxv);
  for (int i = 0; i < n; i++) {
    int ans = i;
    debug(maxv);

    int start = ans;
    while (v[ans] < v[maxv[minv[ans]]]) {
      int next = maxv[minv[ans]];
      ans = next;
    }

    int current = start;
    while (current != ans) {
      int temp = maxv[minv[current]];
      maxv[minv[current]] = ans;
      current = temp;
    }
    cout << v[ans] << " ";
  }
  cout << "\n";
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
