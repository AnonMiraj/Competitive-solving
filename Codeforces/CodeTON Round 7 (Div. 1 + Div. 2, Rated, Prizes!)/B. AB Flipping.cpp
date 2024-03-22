// ﷽
// Contest: CodeTON Round 7 (Div. 1 + Div. 2, Rated, Prizes!)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1896/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 10 Mar 2024 03:14:29 AM EET
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
  int n;
  cin >> n;
  string s;
  cin >> s;

  int i = 0, j = n;
  while (i < n && s[i] == 'B')
    i++;
  while (j > 0 && s[j - 1] == 'A')
    j--;

  int ans = max(0ll, j - i - 1);
  cout << ans << "\n";
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
