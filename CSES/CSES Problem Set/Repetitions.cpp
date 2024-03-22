// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1069
// Memory Limit: 512
// Time Limit: 1000
// Start: Wed 16 Aug 2023 08:19:58 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
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
  int temp = 1;
  int ans = 1;
  cin >> s;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] != s[i - 1])
      temp = 0;
    temp++;
    ans = max(temp, ans);
  }
  cout << ans;
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
