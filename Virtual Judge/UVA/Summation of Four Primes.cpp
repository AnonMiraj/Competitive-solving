// ﷽
// Contest: UVA
//
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-10168
// Memory Limit: 1024
// Time Limit: 3000
// Start: Fri 27 Sep 2024 02:30:15 AM EEST
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
int s = (1e7 + 10);
vector<bool> is_prime(s, 1);
vector<int> prv(s);
void sieve() {
  is_prime[1] = 0;
  is_prime[0] = 0;
  for (int i = 4; i < s; i += 2) is_prime[i] = 0;
  for (int i = 3; i * i < s; i += 2) {
    if (is_prime[i]) {
      for (int j = i * i; j < s; j += i + i) is_prime[j] = 0;
    }
  }
}
void solve() {
  sieve();
  int p = 2;
  for (int i = 2; i < s; i++) {
    if (is_prime[i]) p = i;
    prv[i] = p;
  }

  int x;
  while (cin >> x) {
    if (x < 8) {
      cout << "Impossible.\n";
      continue;
    }

    for (int i = 3; i >= 0; i--) {
      int pp = prv[x - 2 * i];
      cout << pp << "\n   "[i];
      x -= pp;
    }
  }
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}
