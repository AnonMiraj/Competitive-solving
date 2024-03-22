// ﷽
// Contest: Educational Codeforces Round 163 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1948/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 15 Mar 2024 04:47:32 PM EET
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
#include <memory>
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
  vector<string> v(n);
  string x;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  vector<int> b;
  b.push_back(stoi(v.back()));
  v.pop_back();
  while (!v.empty()) {
    if (b.back() < stoi(v.back())) {
      if (v.back().size() == 2) {
        b.push_back(v.back()[1]-'0');
      }
      b.push_back(v.back()[0]-'0');
    } else {

      b.push_back(stoi(v.back()));
    }
    v.pop_back();
  }
  debug(b);
  if (is_sorted(b.rbegin(), b.rend())) {

    cout << "YES\n";
    return;
  }
  cout << "NO\n";
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
