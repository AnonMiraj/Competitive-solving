// ﷽
// Contest: Codeforces Round 988 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2037/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 17 Nov 2024 04:49:55 PM EET
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

bool isPrime(int x) {
  if (x < 2) return false;
  for (int i = 2; i * i <= x; ++i) {
    if (x % i == 0) return false;
  }
  return true;
}

bool check(const vector<int>& p) {
  for (size_t i = 0; i < p.size() - 1; ++i) {
    if (isPrime(p[i] + p[i + 1])) return false;
  }
  return true;
}

vector<int> spf, primes;
void sieve(int n) {
  spf.assign(n + 1, 0);
  primes.clear();

  for (int i = 2; i <= n; i++) {
    if (spf[i] == 0) {
      spf[i] = i;
      primes.push_back(i);
    }

    for (auto p : primes) {
      if (i * p > n) {
        break;
      }
      spf[i * p] = p;
      if (p == spf[i]) {
        break;
      }
    }
  }
}
#define MUTLI_CASE
void solve() {
  int n;
  cin >> n;
  if (n < 5) {
    cout << -1 << '\n';
    return;
  }
  vector<int> v;
  int ind = 0;
  for (int i = 1; i <= n; i += 2) {
    if (i == 5) continue;
    v.push_back(i);
    ind++;
  }

  v.push_back(5);
  for (int i = 4; i <= n; i += 2) {
    v.push_back(i);
  }
  v.push_back(2);
  if (check(v)) {
    for (int i = 0; i < n; i++) {
      cout << v[i] << " ";
    }
    cout << '\n';

  } else
    exit(10);
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
