// ﷽
// Contest: Codeforces Round 935 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1945/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 19 Mar 2024 10:53:55 PM EET
// Reading Time : 3
// Thinking Time : 10
// Coding Time : 30
// Comments : bad problem statment
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdlib>
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
#include <debug.hpp>
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
  string s;
  cin >> s;
  int O = 0, I = 0;
  vector<int> suff(n + 1,0);
  vector<int> pref(n + 1,0);
  for (int i = 0; i < n; i++) {
    if (O >= I) {
      pref[i] = 1;
    }
    if (s[i] == '0') {
      O++;
    } else {
      I++;
    }
  }
  if (O >= I) {
    pref[n] = 1;
  }
  O = 0, I = 0;
  for (int i = n; i >0; i--) {
    if (O <= I) {
      suff[i] = 1;
    }
    if (s[i - 1] == '0') {
      O++;
    } else {
      I++;
    }
  }
  if (O <= I) {
    suff[0] = 1;
  }
  float ans = 40000000;
  for (int i = 0; i <= n; i++) {
    if (pref[i] && suff[i]) {
      if (abs(n / 2.f - ans) > abs(n / 2.f - i)) {
        ans = min(ans,(float)i);
      }
    }
  }

  debug(pref);
  debug(suff);
  cout<<ans<<"\n";
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
