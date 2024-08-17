// ﷽
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 30 Mar 2024 06:47:47 AM EET
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
  string a = "##";
  string b = "..";
  string s1 = "", s2 = "";
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {

      if (cnt & 1) {
        s1 += b;
        s2 += b;
      } else {
        s1 += a;
        s2 += a;
      }
      cnt = !cnt;
    }

    if (!(n&1)) {
      
      cnt = !cnt;
    }
    cout << s1 << '\n' << s2 << '\n';
    s1 = "", s2 = "";
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
