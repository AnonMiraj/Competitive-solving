// ﷽
// Contest: Codeforces Round 981 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2033/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 24 Oct 2024 06:21:57 PM EEST
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
bool f(vector<int>& v) {
  int n = v.size();
  for (int i = 0; i < n; i++) {
    if (v[i] != i + 1 && v[v[i] - 1] != i + 1) {
      return false;
    }
  }
  return true;
}
void solve() {
  int n = 5;
  /*cin >> n;*/
  vector<int> v(n);
  iota(all(v), 1);
  /*for (int i = 0; i < n; i++) {*/
  /*  cin >> v[i];*/
  /*}*/

  int c=0;
  do {
    c++;
    if(f(v))
      debug(c,v);

  } while (next_permutation(v.begin(), v.end()));
  debug();
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  /*n = 1;*/
  while (n--) solve();
  return 0;
}
