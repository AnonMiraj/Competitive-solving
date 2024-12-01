// ﷽
// Contest: Codeforces Round 984 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2036/problem/b
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 02 Nov 2024 04:39:42 PM EET
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
void solve() {
  int n;
  int k;
  cin >> n;
  cin >> k;
  vector<int> v;
  vector<int> freq(k+9);
  map<int, int> m;
  int x, a;
  for (int i = 0; i < k; i++) {
    cin >> x;
    cin >> a;
    freq[x] += a;
  }
  sort(all(freq), greater<>());
  int asn = 0;
  for (int i = 0; i < min(n, k); i++) {
    asn += freq[i];
  }

  cout << asn << "\n";
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
