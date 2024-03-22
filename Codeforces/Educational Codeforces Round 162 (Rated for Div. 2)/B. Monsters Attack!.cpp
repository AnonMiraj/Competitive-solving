// ﷽
// Contest: Educational Codeforces Round 162 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1923/problem/B
// Memory Limit: 256
// Time Limit: 2500
// Start: Fri 23 Feb 2024 02:44:53 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <ostream>
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
  int n, k;
  cin >> n >> k;
  int arr[n + 1] = {};
  pair<int, int> p[n];
  for (auto &i : p) {
    cin >> i.second;
  }
  for (auto &i : p) {
    cin >> i.first;
    i.first = abs(i.first);
    arr[i.first] += i.second;
  }
  int sho = k;
  int turn = 0;
  for (int i = 1; i <= n; i++) {
    while (arr[i]) {
      if (sho == k) {
        turn++;
      }
      int a = min(arr[i], sho);
      arr[i] -= a;
      sho -= a;

      if (!sho) {
        sho = k;
      }
      if (turn > i) {
        cout << "NO\n";
        return;
      }
    }
  }
  cout << "YES\n";
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
