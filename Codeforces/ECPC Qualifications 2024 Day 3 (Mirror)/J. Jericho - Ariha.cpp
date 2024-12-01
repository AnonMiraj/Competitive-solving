// ﷽
// Contest: ECPC Qualifications 2024 Day 3 (Mirror)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/537870/problem/J
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 07 Oct 2024 02:28:46 PM EEST
// Reading Time : 1
// Thinking Time : 2
// Coding Time : 10
// Debug Time : 40
// Submit Count: 1
// Problem Level: 4.2
// Category : math
// Comments : use the properties of sqrt more
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

int solve(int x, int y) {
  map<int, int> a = primefacts(x);
  map<int, int> b = primefacts(x * y);
  int ans = 0;
  for (auto &[k, v] : b) {
    if (v & 1) {
      return -1;
    }
    ans += abs(v / 2 - a[k]);
  }
  return ans;
}
#define MUTLI_CASE
int solve1() {
  int x, y;
  cin >> x >> y;
  if (y > x) swap(x, y);
  int g = __gcd<int>(x, y);
  y /= g;
  x /= g;
  int xx = sqrtl(x);
  int yy = sqrtl(y);
  if (yy * yy != y || xx * xx != x) {
    return -1;
  }
  map<int, int> m1 = primefacts(xx);
  map<int, int> m2 = primefacts(yy);
  int ans = 0;
  for (auto &[k, v] : m1) {
    ans += v;
  }

  for (auto &[k, v] : m2) {
    ans += v;
  }
  return ans;
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  /**/
  /*while (1) {*/
  /*  int n = rand() % 100000 + 10;*/
  /*  n *= n;*/
  /*  map<int, int> m = primefacts(n);*/
  /*  int a = 1, b = 1;*/
  /*  for (auto &[k, v] : m) {*/
  /*    while (v--) {*/
  /*      if (rand() % 2)*/
  /*        a *= k;*/
  /*      else*/
  /*        b *= k;*/
  /*    }*/
  /*  }*/
  /*  int s1 = solve(a, b);*/
  /*  int s2 = solve2(a, b);*/
  /*  if (s2 != s1) {*/
  /*    debug(a, b);*/
  /*    debug(s2, s1);*/
  /**/
  /*    return 0;*/
  /*  }*/
  /*}*/
  int n;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--) {
    cout << solve1() << "\n";
  }

  return 0;
}
