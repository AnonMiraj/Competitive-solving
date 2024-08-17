// ﷽
// Contest: Codeforces Round 946 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1974/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 20 May 2024 07:06:51 PM EEST
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

  int N = 0, E = 0;
  int n;
  cin >> n;
  string s, backup;

  cin >> s;

  backup = s;
  for (char i : s)
    switch (i) {
    case 'N':
      N++;
      break;
    case 'S':
      N--;
      break;
    case 'E':
      E++;
      break;
    case 'W':
      E--;
      break;
    }
  debug(N, E);
  if (n == 2 && s[1] != s[0]) {
    cout << "NO\n";
    return;
  }
  if (N & 1) {
    cout << "NO\n";
    return;
  }

  if (E & 1) {
    cout << "NO\n";
    return;
  }

  int an = 1;
  int as = 1;
  int ae = 1;
  int aw = 1;
  for (char &i : s) {
    switch (i) {
    case 'N':
      if (N)
        N--, i = (an ? 'H' : 'R'),an^=1;
      else
        i = 'H';
      break;
    case 'S':
      if (N)
        N++, i = (as? 'H' : 'R'),as^=1;
      else
        i = 'H';
      break;
    case 'E':
      if (E)
        E--, i = (ae ? 'H' : 'R'),ae^=1;
      else
        i = 'H';
      break;
    case 'W':
      if (E)
        E++, i = (aw ? 'H' : 'R'),aw^=1;
      else
        i = 'H';
      break;
    }
  }
  debug(s);
  if (s.find('R') == string::npos) {

    int ind1 = backup.find('E');
    int ind2 = backup.find('W');
    int ind3 = backup.find('N');
    int ind4 = backup.find('S');
    debug(ind1);
    debug(ind2);
    debug(ind3);
    debug(ind4);
    if (ind1 != string::npos) {
      s[ind1]='R';
      s[ind2]='R';
      ind3=string::npos;
    }

    if (ind3 != string::npos) {
      s[ind3]='R';
      s[ind4]='R';
    }
  }
  cout << s << "\n";
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
