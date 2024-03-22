// ﷽
// Contest: Codeforces Round 928 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1926/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 19 Feb 2024 02:40:34 PM UTC
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
  string s[n];

  char a;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a;
      if (a == '1') {
        s[i].push_back(a);
      }
    }
  }
  int x = 0;
  int ans[10 + 1] = {};
  for (int i = 0; i < n; i++) {
    ans[s[i].size()]++;
  }

  int sq = 1;
  for (int i = 1; i <= 10; i++) {
    if (ans[i] != i && ans[i]) {
      sq = 0;
    }
  }
  if (sq) {
    cout << "SQUARE\n";
    return;
  }
  cout << "TRIANGLE\n";
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
