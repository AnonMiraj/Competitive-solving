// ﷽
// Contest: Codeforces Round 130 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/208/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 14 Apr 2024 10:48:01 PM EET
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
  string ans = "";
  string b = "WUB";

  int pos = 0;
  while ((pos = s.find("WUB", pos)) != std::string::npos) {
    s.replace(pos, 3, " ");
  }
  cout << s;
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
