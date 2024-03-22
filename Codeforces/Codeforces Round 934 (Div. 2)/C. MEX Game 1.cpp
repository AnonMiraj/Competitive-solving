// ﷽
// Contest: Codeforces Round 934 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1944/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 16 Mar 2024 06:51:44 PM EET
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
  int n;
  cin >> n;
  int  freq[n+1]={};
  int t;

  for (int i = 0; i < n; i++) {
    cin >> t;
    freq[t]++;
  }
  int me = 0;
  int aaaa = 1;
  for (int i = 0; i <= n; i++) {
    if (freq[i] == 0) {
      me = i;
      break;
    } else if (freq[i] == 1) {
      if (aaaa)
        aaaa = false;

      else {
        me = i;
        break;
      }
    }
  }

  cout << me << "\n";
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
