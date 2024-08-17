// ﷽
// Contest: Codeforces Beta Round 84 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/110/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 19 Apr 2024 11:36:33 PM EET
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
bool isluck(int x) {
  string s = to_string(x);
  for (char &c : s) {
    if (c != '4' && c != '7') {
      return false;
    }
  }
  return true;
}

void solve() {
  string n;
  cin >> n;
  int d = 0;
  for (char &i : n) {
    if (i == '4' || i == '7') {
      d++;
    }
  }
  cout<<(isluck(d)? "YES":"NO");
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
