// ﷽
// Contest: ECPC Qualifications 2024 Day 2 (Mirror)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/537640/problem/G
// Memory Limit: 256
// Time Limit: 3000
// Start: Wed 24 Jul 2024 03:36:31 AM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>
 
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
 
using namespace std;

const int NMAX = 1e6;
bitset<NMAX / 2> bits;
vector<int> primes={2};

void precalcseive() {
  bits.set();
  for (int i = 3; i / 2 < bits.size(); i = 2 * bits._Find_next(i / 2) + 1) {
    for (auto j = (int64_t)i * i / 2; j < bits.size(); j += i)
      bits[j] = 0;
  }
}
using namespace std;
 
template<class T>
using rpq = priority_queue<T, vector<T>, greater<T>>;
 
template<int32_t mod>
struct mint {
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
            if (b & 1) res *= a;
        return res;
    }
    Z inv() const { return assert(x != 0), power(mod - 2); }
    Z operator-() const { return -x; }
    Z &operator*=(const Z &r) { return *this = (long long) x * r.x; }
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
constexpr int MOD = 1e9+7;
using Z = mint<MOD>;
 
vector<Z> fact = {1};
vector<Z> fact_inv = {1};
 
void build_fact(int n = 1e6) {
    while ((int) fact.size() < n + 1)
        fact.push_back(fact.back() * (int) fact.size());
    fact_inv.resize(fact.size());
    fact_inv.back() = fact.back().inv();
    for (int j = fact_inv.size() - 2; fact_inv[j].x == 0; j--)
        fact_inv[j] = fact_inv[j + 1] * (j + 1);
}
 
Z ncr(int n, int r) {
    if (r > n || r < 0) return 0;
    if ((int) fact.size() < n + 1) build_fact(n);
    return fact[n] * fact_inv[r] * fact_inv[n - r];
}

map<int,int>mq;
void solve() {
  int q;
  cin>>q;
  Z ans=0;
  int ind=0;
  if (!q||mq[q]) {
    cout<<mq[q]<<endl;
    return;
  }
  while (primes[ind]<=q) {
    ans+=ncr(q, primes[ind]);
    ans.x%=MOD;
    ind++;
  }
  mq[q]=ans.x;
  cout<<ans<<"\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  precalcseive();
  build_fact();
  for (int  i = 3; i <= 1e6; i+=2) {
    if (bits[i/2]) {
      primes.push_back(i);
    }
  }
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
