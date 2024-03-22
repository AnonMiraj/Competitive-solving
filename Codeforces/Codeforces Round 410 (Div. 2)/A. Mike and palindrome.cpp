// ﷽
// Contest: Codeforces Round 410 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/798/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 14 Mar 2024 11:15:31 PM EET
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  string s;
  cin >> s;
  int ans = 0;
  for (size_t i = 0; i < s.length() / 2; ++i) {
    if (s[i] != s[s.length() - 1 - i]) {
      ans++;
    }
  }
  if (!ans&&s.size()&1) {
    ans++;
  }
  cout<<(ans==1?"YES":"NO");
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
