// ﷽
// Contest: Codeforces Round 326 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/588/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 27 Sep 2024 01:43:02 AM EEST
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
map<int, int> primefacts(int n) {
  map<int, int> primes;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      primes[i] = 1;
      n /= i;
    }
  }
  if (n != 1) {
    primes[n] = 1;
  }
  return primes;
}
void solve() {
  int n;
  cin >> n;
  map<int, int> m;
  m = primefacts(n);
  int ans = 1;
  for (auto &[a,b] : m) {
    ans*=a;
  }
  cout<<ans;
  
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
