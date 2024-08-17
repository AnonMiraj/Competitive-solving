// ﷽
// Contest: Codeforces Beta Round 47
// Judge: Codeforces
// URL: https://codeforces.com/contest/50/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 05 Apr 2024 11:05:21 PM EET
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
  cin>>s;
  int ans = 0;
  map<char, int> m;
  for (size_t i = 0; i < s.size(); i++) {
    m[s[i]]++;
  }

  for (char i = 'a'; i <= 'z'; i++) {
    ans += m[i]*m[i];
  }

  for (char i = '0'; i <= '9'; i++) {
    ans += m[i]*m[i];
  }
  cout << ans;
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
