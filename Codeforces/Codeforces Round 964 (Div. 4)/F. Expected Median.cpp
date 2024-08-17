// ﷽
// Contest: Codeforces Round 964 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1999/problem/F
// Memory Limit: 256
// Time Limit: 3000
// Start: Tue 06 Aug 2024 06:44:52 PM EEST
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

template <class T> using rpq = priority_queue<T, vector<T>, greater<T>>;

template <int32_t mod> struct mint {
  using Z = mint;
  int32_t x;
  mint(int32_t x = 0) : x(norm(x)) {}
  mint(long long x) : x(norm(x % mod)) {}
  inline int32_t norm(int32_t x) const {
    return x >= mod ? x - mod : (x < 0 ? x + mod : x);
  }
  Z power(long long b) const {
    Z res = 1, a = x;
    for (; b; b >>= 1, a *= a)
      if (b & 1)
        res *= a;
    return res;
  }
  Z inv() const { return assert(x != 0), power(mod - 2); }
  Z operator-() const { return -x; }
  Z &operator*=(const Z &r) { return *this = (long long)x * r.x; }
  Z &operator+=(const Z &r) { return *this = x + r.x; }
  Z &operator-=(const Z &r) { return *this = x - r.x; }
  Z &operator/=(const Z &r) { return *this *= r.inv(); }
  friend Z operator*(const Z &l, const Z &r) { return Z(l) *= r; }
  friend Z operator+(const Z &l, const Z &r) { return Z(l) += r; }
  friend Z operator-(const Z &l, const Z &r) { return Z(l) -= r; }
  friend Z operator/(const Z &l, const Z &r) { return Z(l) /= r; }
  friend ostream &operator<<(ostream &os, const Z &a) { return os << a.x; }
  friend istream &operator>>(istream &is, Z &a) {
    long long y = 0;
    return is >> y, a = y, is;
  }
};

// constexpr int MOD = 998244353;
constexpr int MOD = 1000000007;
using Z = mint<MOD>;

vector<Z> fact = {1};
vector<Z> fact_inv = {1};

void build_fact(int n = 1e6) {
  while ((int)fact.size() < n + 1)
    fact.push_back(fact.back() * (int)fact.size());
  fact_inv.resize(fact.size());
  fact_inv.back() = fact.back().inv();
  for (int j = fact_inv.size() - 2; fact_inv[j].x == 0; j--)
    fact_inv[j] = fact_inv[j + 1] * (j + 1);
}

Z ncr(int n, int r) {
  if (r > n || r < 0)
    return 0;
  if ((int)fact.size() < n + 1)
    build_fact(n);
  return fact[n] * fact_inv[r] * fact_inv[n - r];
}

void solve() {
  int n, k;
  cin >> n >> k;
  int nn = n;
  int t;
  int I = 0;
  while (n--) {
    cin >> t;
    I += t;
  }
  Z ans = 0;
  int O = nn - I;

  for (int r = 1; r <= k; ++r) {
    int b = k - r;
    if (r > b) {
      ans += ncr(I, r) * ncr(O, b);
    }
  }
  debug(ncr(0,0));
  cout << ans << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  build_fact();
  cin >> n;
  while (n--)
    solve();
  return 0;
}
