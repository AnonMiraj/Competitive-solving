// ﷽
// Contest: Team Formation 24
// Judge: Codeforces
// URL: https://codeforces.com/group/EhYxAu9AgP/contest/515802/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 11 Apr 2024 07:02:39 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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
int las = 0, lasend;
size_t ind = 0;
int tt(string &s, string &p) {
  if (p.size() > s.size()) {
    return 0;
  }
  size_t i;
  ind = lasend;
  for (i = las; i < s.size() && ind < p.size(); i++) {
    if (s[i] == p[ind]) {
      ind++;
    }
  }
  las = i;
  if (ind == p.size()) {
    lasend = ind;
    return 1;
  }
  return 0;
}

void solve() {
  string s;
  cin >> s;
  int n;
  cin >> n;
  string p, q;
  char t;
  while (n--) {
    cin >> q;
    if (q == "push") {

      cin >> t;
      p += t;
    } else {
      p.pop_back();
      las = 0;
      lasend = 0;
    }
    cout << (tt(s, p) ? "YES\n" : "NO\n");

    debug(p);
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
