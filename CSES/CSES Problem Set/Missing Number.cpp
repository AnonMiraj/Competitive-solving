// Problem: Missing Number
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1083
// Memory Limit: 512
// Time Limit: 1000
// Start: Wed 16 Aug 2023 08:06:43 PM UTC
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
  int n, sum = 0, tot;
  cin >> n;
  tot = ((n * (n + 1)) / 2);
  for (int i = 1; i < n; i++) {
    int temp;
    cin >> temp;
    sum += temp;
  }
  cout << tot - sum;

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
