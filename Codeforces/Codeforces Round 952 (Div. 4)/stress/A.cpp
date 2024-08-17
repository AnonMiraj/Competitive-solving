// ﷽
// Contest: Codeforces Round 952 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1985/problem/E
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 11 Jun 2024 05:57:11 PM EEST
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

#define int long long

using namespace std;

void solve() {
  int xyz[3], k;
  cin >> xyz[0] >> xyz[1] >> xyz[2] >> k;
  int n = k;
  sort(xyz, xyz + 3);
  priority_queue<int> stk;
  debug_itr(xyz, xyz + 3);
  if (xyz[0] * xyz[1] * xyz[2] == k) {

    cout << 1 << "\n";
    return;
  }
  int xyz_prime[3] = {1, 1, 1};
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      stk.push(i);
      n /= i;
    }
  }

  if (n != 1) {
    stk.push(n);
  }

  debug(stk);
  debug_itr(xyz_prime, xyz_prime + 3);
  while (!stk.empty()) {
    int i = stk.top();

  sort(xyz_prime, xyz_prime + 3);
    if (xyz_prime[1] * i > xyz[1] && xyz_prime[2] * i > xyz[2]) {
      if (xyz_prime[0] * i > xyz[0] && xyz_prime[2] <= xyz[1] &&
          xyz_prime[1] <= xyz[2])
        swap(xyz_prime[1], xyz_prime[2]);
    }
    if (xyz_prime[0] * i > xyz[0] && xyz_prime[2] * i > xyz[2]) {
      if (xyz_prime[1] * i > xyz[1] && xyz_prime[2] <= xyz[0] &&
          xyz_prime[0] <= xyz[2])
        swap(xyz_prime[0], xyz_prime[2]);
    }

    if (xyz_prime[0] * i > xyz[0] && xyz_prime[1] * i > xyz[1]) {
      if (xyz_prime[2] * i > xyz[2] && xyz_prime[1] <= xyz[0] &&
          xyz_prime[0] <= xyz[1])
        swap(xyz_prime[0], xyz_prime[1]);
    }
    if (xyz_prime[0] * i > xyz[0] && xyz_prime[1] * i > xyz[1] &&
        xyz_prime[2] * i > xyz[2]) {

      cout << 0 << "\n";
      return;
    }
    pair<int, int> m = {0, -INT_MAX};
    for (int j = 0; j < 3; j++) {

      int x = abs(xyz_prime[(j) % 3] * i - (xyz[(j) % 3] + 1)) *
              abs(xyz_prime[(j + 1) % 3] - (xyz[(j + 1) % 3] + 1)) *
              abs(xyz_prime[(j + 2) % 3] - (xyz[(j + 2) % 3] + 1));
      if (xyz_prime[j] * i <= xyz[j] && x > m.second) {
        m.second = x;
        m.first = j;
      }
    }
    xyz_prime[m.first] *= i;

    debug_itr(xyz_prime, xyz_prime + 3);
    stk.pop();
  }

  sort(xyz_prime, xyz_prime + 3);
  debug_itr(xyz_prime, xyz_prime + 3);
  ;
  int ans = abs(xyz_prime[0] - (xyz[0] + 1));
  ans *= abs(xyz_prime[1] - (xyz[1] + 1));
  ans *= abs(xyz_prime[2] - (xyz[2] + 1));
  cout << ans << "\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
