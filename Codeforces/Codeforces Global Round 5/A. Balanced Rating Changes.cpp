// ﷽
// Contest: Codeforces Global Round 5
// Judge: Codeforces
// URL: https://codeforces.com/contest/1237/problem/A
// Memory Limit: 512
// Time Limit: 1000
// Start: Sat 27 Jan 2024 05:24:05 PM UTC
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
  int o = 1;
  int arr[n];
  for (size_t i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (size_t i = 0; i < n; i++) {
    if (arr[i] & 1) {
      cout << (arr[i] + o) / 2 << endl;
      o *= -1;
    } else
      cout << arr[i] / 2 << endl;
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
