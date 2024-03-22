// ﷽
// Contest: Codeforces Round 929 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1933/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 27 Feb 2024 02:41:49 PM UTC
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
  int sum = 0, s, o = 0, t = 0;

  while (n--) {
    cin >> s;
    if (s % 3 == 1) {
      o++;
    } else if (s % 3 == 2) {
      t++;
    }
    sum += s;
  }
  if (!(sum % 3)) {
    cout << 0 << "\n";
    return;
  }
  if (o && sum % 3 == 1) {

    cout << 1 << "\n";
    return;
  }
  if (t && sum % 3 == 2) {

    cout << 1 << "\n";
    return;
  }
  if (!((sum + 1) % 3)) {
    cout << 1 << "\n";
    return;
  }
  cout << 2 << "\n";
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
