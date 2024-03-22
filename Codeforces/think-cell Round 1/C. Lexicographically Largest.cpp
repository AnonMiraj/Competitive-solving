// ﷽
// Contest: think-cell Round 1
// Judge: Codeforces
// URL: https://codeforces.com/contest/1930/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 17 Feb 2024 04:26:29 PM UTC
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
  vector<int> arr(n);
  for (auto &i : arr)
    cin >> i;
  set<int>s;
  while (!arr.empty()) {
  
  }

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
