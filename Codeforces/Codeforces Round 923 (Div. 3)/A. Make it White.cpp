// ﷽
// Contest: Codeforces Round 923 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1927/problem/0
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 06 Feb 2024 02:46:35 PM UTC
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
  string s;
  cin >> s;
  int b = s.find("B"), e = s.rfind("B");
  cout << e - b + 1 << endl;
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
