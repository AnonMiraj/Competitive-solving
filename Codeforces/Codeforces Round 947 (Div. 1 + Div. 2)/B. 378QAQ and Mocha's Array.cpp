// ﷽
// Contest: Codeforces Round 947 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1975/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 25 May 2024 06:13:15 PM EEST
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
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v)
    cin >> i;
  int p1 = 0, p2 = 0;
  sort(v.begin(), v.end());

  debug(v);
  p1 = v[0];

  for (int i = 0; i < n; i++) {
    if (v[i] % p1) {
      p2 = v[i];
      break;
    }
  }
  debug(p1,p2);
  if(!p2)
  {

  cout << "Yes\n";
  return;
  }

  for (int i = 1; i < n; i++) {
    if ((v[i] % p1 && v[i] % p2)) {
      cout << "No\n";
      return;
    }
  }
  cout << "Yes\n";
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
