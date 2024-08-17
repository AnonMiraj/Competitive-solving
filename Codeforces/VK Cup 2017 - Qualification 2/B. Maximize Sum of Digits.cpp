// ﷽
// Contest: VK Cup 2017 - Qualification 2
// Judge: Codeforces
// URL: https://codeforces.com/contest/770/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 23 Apr 2024 12:01:51 PM EET
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

int sumDigits(string &s) {
  int sum = 0;

  for (int i = 0; i < s.size(); i++) {
    sum += s[i] - '0';
  }
  return sum;
}
void solve() {
  string x;
  cin >> x;
  string s = x;
  for (int i = s.size() - 1; i > 0; i--) {

    s[i] = '9';
    s[i - 1]--;
    debug(x, s);
    if (sumDigits(s) > sumDigits(x)) {
      x = s;
    }
  }

  cout << stoll(x);
  debug(x, s);
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
