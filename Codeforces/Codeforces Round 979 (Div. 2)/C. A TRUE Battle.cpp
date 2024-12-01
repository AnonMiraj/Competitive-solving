// ﷽
// Contest: Codeforces Round 979 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2030/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 19 Oct 2024 05:20:20 PM EEST
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

int f(string& s) {
  int m = 0, c = 0;
  for (char x : s) {
    if (x == '1')
      c++;
    else
      c = 0;
    m = max(m, c);
  }
  return m>1;
}
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (s[0] == '1' || s[n - 1] == '1')
    cout << "YES\n";
  else if (f(s))
    cout << "YES\n";
  else
    cout << "NO\n";
  debug(00000&1|1|0);
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
