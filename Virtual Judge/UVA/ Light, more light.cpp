// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-10110
// Memory Limit: 1024
// Time Limit: 3000
// Start: Wed 24 Jan 2024 05:40:57 AM UTC
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
  unsigned int x;
  cin >> x;
  do {
  unsigned  int sqrtNum = static_cast<unsigned int>(sqrt(x));

    if (sqrtNum * sqrtNum == x) {
      cout << "yes\n";
    } else
      cout << "no\n";

    cin >> x;

  } while (x != 0);
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
