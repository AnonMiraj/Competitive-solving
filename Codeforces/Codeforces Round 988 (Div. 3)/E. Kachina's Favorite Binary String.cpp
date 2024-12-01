// ﷽
// Contest: Codeforces Round 988 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2037/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 17 Nov 2024 06:38:54 PM EET
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
string s = "11101";
int f(int l, int r) {
  l--;
  r--;
  int countZero = 0;
  int countOne = 0;

  for (int i = l; i <= r; ++i) {
    if (s[i] == '0') {
      countZero++;
    } else if (s[i] == '1') {
      countOne += countZero;
    }
  }
  /*debug(l, r, countOne);*/

  return countOne;
}
int ask(int l, int r) {
  int x;
  cout << "? " << l << " " << r << endl;
  cin >> x;
  /*x = f(l, r);*/

  return x;
}

void ans(string s) { cout << "! " << s << endl; }
void solve() {
  int n;
  cin >> n;
  string an(n, '?');
  debug(s);
  int l = 1, r = 2;
  int prev = -1;
  prev = ask(l, r);
  if (prev == 1) an[0] = '0', an[1] = '1';
  debug(an);
  debug(l, r, prev);
  r++;
  while (r != n + 1) {
    int x = ask(l, r);

    if (prev == 0 && x) {
      for (int i = 0; i < r - 1 - x; i++) {
        an[i] = '1';
      }
      for (int i = r - 1 - x; i < r - 1; i++) {
        an[i] = '0';
      }
      an[r - 1] = '1';
    } else if (x && x > prev)
      an[r - 1] = '1';
    else if (x)
      an[r - 1] = '0';

    debug(an);
    debug(l, r, x);
    r++;
    /*r--;*/
    prev = x;
  }
  for (auto i : an) {
    if (i == '?') {
      ans("IMPOSSIBLE");
      return;
    }
  }
  ans(an);
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
