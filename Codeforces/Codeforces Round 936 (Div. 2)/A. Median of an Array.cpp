// ﷽
// Contest: Codeforces Round 936 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1946/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 22 Mar 2024 04:37:50 PM EET
// Reading Time : 2
// Thinking Time :
// Coding Time : 8
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
  vector<int> v(n +1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  v.push_back(0);
  debug(v);
  int a = 1;
  int d = ceil (n / 2.f);
  while (v[d]==v[d+1]) {
    a++;
    d++;
    
  }
  cout<<a<<"\n";
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
