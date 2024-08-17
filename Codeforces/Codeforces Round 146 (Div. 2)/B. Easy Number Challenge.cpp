// ﷽
// Contest: Codeforces Round 146 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/236/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 26 Apr 2024 09:25:25 AM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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

const int NMAX = 1000000;
bitset<NMAX / 2> bits;
int divCount(int n) {
  int total = 1;
  int count = 0;
  int p = 2;
  if (n % p == 0) {
    while (n % p == 0) {
      n = n / p;
      count++;
    }
    total = total * (count + 1);
  }
  for (p = 3; p <= n; p += 2) {
    if (bits[p / 2]) {
      count = 0;
      if (n % p == 0) {
        while (n % p == 0) {
          n = n / p;
          count++;
        }
        total = total * (count + 1);
      }
    }
  }
  return total;
}
void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  int mod = 2LL << 30;
  // sieve is an overkill;
  //
  //  bits.set();
  //  for (int i = 3; i / 2 < bits.size(); i = 2 * bits._Find_next(i / 2) + 1) {
  //    for (auto j = (int64_t)i * i / 2; j < bits.size(); j += i)
  //      bits[j] = 0;
  //  }
  int arr[a * b * c + 10] = {};
  for (int i = 1; i <= a * b * c; i++) {
    for (int j = i; j <= a * b * c; j+=i) {
      arr[j]++;
    }
  }

  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      for (int k = 1; k <= c; k++) {
        ans += arr[(i * j * k)];
        ans %= mod;
      }
    }
  }
  cout << ans;
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
