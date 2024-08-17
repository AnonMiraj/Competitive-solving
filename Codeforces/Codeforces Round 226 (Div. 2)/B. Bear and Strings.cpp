// ﷽
// Contest: Codeforces Round 226 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/385/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 10 Apr 2024 05:05:39 PM EET
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
#include <stdexcept>
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
  int n = s.size();
  int su = 0;
  int fou;
  for (int i = 0; i < n - 3; i++) {
    fou = s.find("bear", i);
    if (fou != string::npos) {
      su += n - fou - 3;
    }
  }
  cout << su;
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
