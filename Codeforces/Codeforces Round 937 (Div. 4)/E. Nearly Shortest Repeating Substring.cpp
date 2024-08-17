// ﷽
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 30 Mar 2024 07:33:46 AM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <iterator>
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

int diffCount = 0;
int n;
bool compareStrings(const std::string &str1, const std::string &str2) {

  for (size_t i = 0; i < n; i++) {

    if (str1[i] != str2[i]) {
      diffCount++;
    }
    if (diffCount == 2) {
      return false;
    }
  }

  return 1;
}
void solve() {
  string s, k, t = " ";
  cin >> n >> s;

  diffCount = 0;
  for (int i = 1; i <= n / 2; i++) {

    while (n % i && i <= n / 2) {
      i++;
    }
    if (i > n / 2) {
      break;
    }
    t = "";
    k = s.substr(0, i);

    if (k != s.substr(i, i)) {
      k = s.substr(n - i, i);
    }

    for (int a = 0; a < n / i; a++) {
      t += k;
    }

    if (s.size() == t.size()) {
      compareStrings(s, t);
      debug(k);
      debug(t);
      debug(s);
      debug(diffCount);
    }
    if (diffCount <= 1) {
      cout << i << '\n';
      return;
    } else {
      diffCount = 0;
    }
  }
  cout << n << "\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  //
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
