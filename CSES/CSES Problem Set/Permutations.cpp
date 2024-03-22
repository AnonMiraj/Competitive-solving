// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1070
// Memory Limit: 512
// Time Limit: 1000
// Start: Wed 16 Aug 2023 08:46:14 PM UTC
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
  int n;
  cin >> n;
  if (n == 3 || n == 2) {
    cout << "NO SOLUTION ";
    return;
  }
  for (int i = 2; i <= n; i += 2)
    cout << i << " ";
  for (int i = 1; i <= n; i += 2)
    cout << i << " ";
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
