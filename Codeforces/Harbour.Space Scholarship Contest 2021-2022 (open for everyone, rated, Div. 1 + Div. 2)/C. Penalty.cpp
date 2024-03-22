// ﷽
// Contest: Harbour.Space Scholarship Contest 2021-2022 (open for everyone,
// rated, Div. 1 + Div. 2) Judge: Codeforces URL:
// https://codeforces.com/problemset/problem/1553/C Memory Limit: 256 Time
// Limit: 3000 Start: Sat 09 Mar 2024 12:55:19 AM EET
// Reading Time : 2
// Thinking Time : 5
// Coding Time : 95
// Comments : fuckin 2 hours  i really should think on paper more
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
  // 1?0???1001
  // 10?10
  //???01
  string t1, t2;
  int n = 5;
  int w1 = 0, q1 = 0;
  int w2 = 0, q2 = 0;
  char c;
  int ans = 9;

  for (int i = 0; i < 10; i++)

  {

    cin >> c;
    if (c == '?') {
      q1++;
    } else {
      w1 += c == '1';
    }
    if ((q1 + w1 > n + w2)) {
      ans = min(ans, i);
    }
    if ((n - 1 + w1 < q2 + w2)) {
      ans = min(ans, i);
    }
    i++;
    cin >> c;

    if (c == '?') {
      q2++;
    } else {
      w2 += c == '1';
    }

    if ((q2 + w2 > n + w1)) {

      ans = min(ans, i);
    }
    if ((n - 1 + w2 < q1 + w1)) {
      ans = min(ans, i);
    }
    n--;
  }
  cout << ans + 1 << endl;
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
