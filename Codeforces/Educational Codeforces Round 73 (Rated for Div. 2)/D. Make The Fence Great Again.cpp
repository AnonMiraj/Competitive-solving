// ﷽
// Contest: Educational Codeforces Round 73 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1221/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 03 Apr 2024 12:59:03 AM EET
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

int n, a, b, an = 0;
vector<pair<int, int>> v;
void bf(int id) {
  if (id == 0) {
    return;
  }
  if (v[id].first==v[id-1].first) {
    
  }
}

void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    v.push_back({a, b});
  }

  cout << an << endl;
  v.clear();
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
