// ﷽
// Contest: Codeforces Round 165 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/270/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 01 Feb 2024 09:33:06 PM UTC
//
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  float degn = (360.f / (-n + 180.f));
  if (degn == (int)degn) {

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
