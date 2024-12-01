// ﷽
// Contest: Codeforces Round 222 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/378/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 28 Nov 2024 09:22:10 AM EET
// Reading Time : 10
// Thinking Time : 10
// Coding Time : 4
// Debug Time :
// Submit Count : 1
// Problem Level : 3
// Category : sort , adhoc
// Comments : very easy statment but statement is shit
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

/*#define MUTLI_CASE*/
void solve() {
  int n;
  cin >> n;
  vector<int> v1(n);
  vector<int> v2(n);
  vector<int> v;
  map<int, int> m;
  for (int i = 0; i < n; i += 1) {
    cin >> v1[i];
    cin >> v2[i];
    v.push_back(v1[i]);
    v.push_back(v2[i]);
  }
  sort(all(v));
  debug(v);
  for (int i = 0; i < n; i++) {
    m[v[i]] = 1;
    if (i < n / 2) {
      m[v2[i]] = 1;
      m[v1[i]] = 1;
    }
  }
  for (auto i : v1) {
    cout << m[i];
  }
  cout << endl;
  for (auto i : v2) {
    cout << m[i];
  }
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
