// ﷽
// Contest: Hello 2024
// Judge: Codeforces
// URL: https://codeforces.com/contest/1919/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 06 Jan 2024 07:25:00 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
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
  int sum = 0;
  char temp;
  while (n--)
  {
    cin >> temp;
    if (temp == '+') {
      sum++;
    } else
      sum--;
  }
  cout << abs(sum) << endl;
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
