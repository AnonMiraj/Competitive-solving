// ﷽
// Contest: Codeforces Round 176 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/287/problem/B
// Memory Limit: 256
// Time Limit: 400
// Start: Sun 04 Feb 2024 12:10:48 PM UTC
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
inline int sum(int n) { return n * (n + 1) / 2; }
inline int sum(int s, int e) { return sum(e) - sum(s - 1); }

void solve() {
  int n, k;
  cin >> n >> k;
  if (n == 1) {
    cout << 0;
    return;
  }
  if (n <= k) {
    cout << 1;
    return;
  }
  k--;
  n--;

  if (n > sum(k)) {
    cout << -1;
    return;
  }
  int s = 1, en = k;

  int md;
  while (s < en) {
    md = (s + en) / 2;
    int su = sum(md, k);

    if (su == n) {
      cout << k - md + 1;
      return;
    }
    if (su > n) {
      s = md + 1;
    } else {
      en = md;
    }
  }
  cout << k - s + 2;
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
