// ﷽
// Contest: UVA
//
// Judge: Virtual Judge
// URL:
// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1266
// Memory Limit: 1024
// Time Limit: 3000
// Start: Wed 06 Nov 2024 04:14:10 PM EET
// Reading Time : 3
// Thinking Time : 4
// Coding Time : 15
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
long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }
long long lcm(long long a, long long b) { return (a * b / gcd(a, b)); }
vector<int> arr;
int inc_exe(int idx = 0, int d = 1, int sign = 1) {
  if (idx == k) {
    return sign * n / d;
  }
  return inc_exe(idx + 1, d, sign) +
         inc_exe(idx + 1, lcm(d, arr[idx]), sign * -1);
}

void solve() {
  while (cin >> n >> k) {
    arr = vector<int>(k);
    for (int i = 0; i < k; i++) {
      cin >> arr[i];
    }
    cout << inc_exe() << "\n";
  }
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
