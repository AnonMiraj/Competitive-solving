// ﷽
// Contest: Codeforces Round 902 (Div. 1, based on COMPFEST 15 - Final Round)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1876/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 22 Apr 2024 04:29:03 PM EET
// Reading Time : 5
// Thinking Time : 10
// Coding Time : 15
// Comments : good problem i didnt need to take that long to solve it tho WA1 forgot a case
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
  int n, p;
  cin >> n >> p;
  int cost = 0;
  int m=n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].second;
  }

  for (int i = 0; i < n; i++) {
    cin >> v[i].first;
  }
  sort(v.begin(),v.end());

  int am=0;
  for (int i = 0; m&&i < n; i++) {
    if (v[i].first<p) {
      if (!am) {
      m--;
      cost+=p;
      }
      am++;
      int def=min(m,v[i].second);
      if (!def) {
        break;
      }
      debug(def);

      cost +=def*v[i].first;
      m-=def;

      
    }

  }
  debug(am);
  cout<<cost+m*p<<"\n";
  debug(cost);
  debug(cost +m*p);
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
