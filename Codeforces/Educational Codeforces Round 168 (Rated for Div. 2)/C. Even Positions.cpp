// ﷽
// Contest: Educational Codeforces Round 168 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1997/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 30 Jul 2024 05:49:45 PM EEST
// Reading Time :4
// Thinking Time : 40
// Coding Time : 20
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
string a;
int n;

int calc(const string &s) {

  vector<int> o;
  int c = 0;

  for (int i = 0; i < n; ++i) {
    if (s[i] == '(') {
      o.push_back(i);
    } else if (s[i] == ')') {
      if (o.empty()) {
        return -1;
      }
      int oi = o.back();
      o.pop_back();
      c += i - oi;
    }
  }

  return c;
}

string ss(string &a, int ind) {

  int vo = 0, vc = 0;
  for (int i = ind; i < n; i++) {
    if (a[i] == '(') {
      vc++;
    }

    if (a[i] == ')') {
      vo++;
    }
    if (a[i] == '_') {
      if (vo >= vc) {
        a[i] = '(';
        vc++;
      } else {
        a[i] = ')';
        vo++;
      }
    }
  }
  debug(a);
  return a;
}
void solve() {
  cin >> n;
  cin >> a;
  a[0] = '(';
  cout << calc(ss(a, 0)) << endl;
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
