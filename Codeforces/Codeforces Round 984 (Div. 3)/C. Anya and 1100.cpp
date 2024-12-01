// ﷽
// Contest: Codeforces Round 984 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2036/problem/c
// Memory Limit: 256
// Time Limit: 3000
// Start: Sat 02 Nov 2024 04:48:11 PM EET
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
int qq = 0;
int f(string s) {
  int is_there = 0;
  for (int i = 0; i < s.size() - 3; i++) {
    if (s.substr(i, 4) == "1100") is_there++;
  }
  return is_there;
}
void solve() {
  string s;
  cin >> s;
  int q;
  cin >> q;
  int n = s.size();
  if (n < 4) {
    while (q--) {
      int ind, v;
      cin >> ind >> v;
      cout << "NO\n";
    }
    return;
  }
  int is_there = f(s);
  debug(is_there);
  string ss;
  while (q--) {
    debug(qq++,"____+____");
    int ind, v;
    cin >> ind >> v;
    string a;
    ind--;
    int pos = ind - 2;
    if (v) pos++;
    int start = (pos >= 5) ? pos - 5 : 0;
    int end = min(pos + 5, n - 1);
    ss = s.substr(start, end - start + 1);

    int before = f(ss);
    debug(s);
    debug(ind,v);
    s[ind] = v + '0';
    debug(s);
    ss = s.substr(start, end - start + 1);
    int after = f(ss);
    debug(ss);
    debug(before);
    debug(after);
    if (before > after) is_there--;
    if (before < after) is_there++;

    debug(is_there);
    if (is_there)
      cout << "YES\n";
    else
      cout << "NO\n";
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
  while (n--) {
    debug("___________________");

    solve();
  }
  return 0;
}
