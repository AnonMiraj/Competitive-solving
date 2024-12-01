// ﷽
// Contest: QCPC 2024 (Mirror)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/551747/problem/K
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 14 Oct 2024 11:07:45 AM EEST
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

int calcDivisors(int n) {
  int ans = 1;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ans *= i;
      if (i * i != n) {
        ans *= n / i;
      }
    }
  }
  return ans;
}
map<int, int> primefacts(int n) {
  map<int, int> primes;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      primes[i]++;
      n /= i;
    }
  }
  if (n != 1) {
    primes[n]++;
  }
  return primes;
}

void solve() {
  int d;
  cin >> d;
  map<int, int> m = primefacts(d);
  map<int, int> in_m = m;

  if(d==1)
  {

    cout<<1<<"\n";
    return;

  }

  int g, mg = -1;
  for (auto &[a, b] : m) {
    g = b;
    break;
  }
  for (auto &[a, b] : m) {
    g = gcd(b, g);
  }
  debug(g, m, in_m);
  for (auto &[a, b] : in_m) {
    b /= g;
  }

  for (int i = 1; i <= g; i++) {
    int nn = 1;
    for (auto &[a, b] : in_m) {
      nn *= pow(a, b * i);
    }
    if (calcDivisors(nn) == d) {
      cout << nn << "\n";
      return;
    }
  }
      cout << -1  << "\n";
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
