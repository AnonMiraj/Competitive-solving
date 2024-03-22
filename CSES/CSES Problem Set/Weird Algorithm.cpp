// Problem: Weird Algorithm
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1068
// Memory Limit: 512
// Time Limit: 1000
// Start: Wed 16 Aug 2023 08:03:57 PM UTC
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
  std::cin >> n;

  while (n != 1) {
    cout << n << " ";
    (n & 1 ? n = 3 *n + 1 : n /= 2);
  }
  cout << 1;
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
