// ﷽
// Contest: Codeforces Round 372 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/716/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 14 May 2024 11:46:43 PM EEST
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

void solve() {
  string s;
  cin >> s;

  int freq[26] = {};
  int p1 = 0, p2 = 0, q = 0, ex = 0;
  while (p2 != s.size()) {

    while (freq[s[p2] - 'A'] == 2) {
      if (s[p1] == '?')
        q--;
      else {
        if (freq[s[p1] - 'A'] == 1)
          ex--;
        freq[s[p1] - 'A']--;
      }
      p1++;
    }
    if (s[p2] == '?')
      q++;
    else {
      if (!freq[s[p2] - 'A'])
        ex++;
      freq[s[p2] - 'A']++;
    }

    p2++;

    debug(q + ex, p2 - p1, p1);

    while (p2 - p1 > 26) {
      if (s[p1] == '?')
        q--;
      else {
        if (freq[s[p1] - 'A'] == 1)
          ex--;
        freq[s[p1] - 'A']--;
      }
      p1++;
    }
    if (p2 - p1 == 26 && ex + q == 26) {
      for (int i = p1; i <= p2; i++) {
        if (s[i] == '?') {
          for (int j = 0; j < 26; j++) {
            if (!freq[j]) {
              s[i] = 'A' + j;
              freq[j] = 1;
              break;
            }
          }
        }
      }

      for (char &c : s) {
        if (c == '?')
          c = 'A';
      }
      cout << s;
      return;
    }
  }

  debug_itr(freq, freq + 26);
  debug(q, ex, p1, p2);
  debug(s);
  cout << -1;
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
