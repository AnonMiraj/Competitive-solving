// ﷽
// Contest: CodeTON Round 5 (Div. 1 + Div. 2, Rated, Prizes!)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1842/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 28 Mar 2024 06:24:36 AM EET
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
  int n, x;
  cin >> n >> x;
  int temp, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if ((x & temp) != temp) {
      
  for (int j = i+1; j < n; j++) {
    cin>>temp;
  }
      break;
    }
    ans |= temp;
  }

  for (int i = 0; i < n; i++) {
    cin >> temp;
    if ((x & temp) != temp) {
  for (int j = i+1; j < n; j++) {
    cin>>temp;
  }
      break;
    }
    ans |= temp;
  }

  for (int i = 0; i < n; i++) {
    cin >> temp;
    if ((x & temp) != temp) {
  for (int j = i+1; j < n; j++) {
    cin>>temp;
  }
      break;
    }
    ans |= temp;
  }
  cout << (ans == x ? "Yes\n" : "No\n");
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
