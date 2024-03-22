// ﷽
// Contest: Codeforces Beta Round 95 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/131/A
// Memory Limit: 256
// Time Limit: 500
// Start: Sun 31 Dec 2023 08:40:36 PM UTC
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
  string s;
  cin >> s;
  bool test = true;

  for (size_t i = 1; i < s.size(); i++) {

    if (islower(s[i])) {
      cout << s;
      return;
    }
  }

  for (size_t i = 0; i < s.size(); i++) {
    cout<<(char) (s[i]^32);
  }
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
