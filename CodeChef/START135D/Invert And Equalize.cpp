// ﷽
// Contest: START135D
// Judge: CodeChef
// URL: https://www.codechef.com/START135D/problems/INVEQ
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 22 May 2024 06:07:26 PM EEST
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
  string s;
  cin >> s;
  int I = 0;
  int O = 0;
  int i;
  for (i = 1; i < n; i++) {
    if (s[i] != s[i - 1]) {
      if (s[i - 1] == '1')
        I++;
      else
        O++;
    }
  }

  if (s[i - 1] == '1')
    I++;
  else
    O++;

  debug(I, O);
  cout << max(-1, 0) << "\n";
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
