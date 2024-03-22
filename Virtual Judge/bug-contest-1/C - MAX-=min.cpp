// ﷽
// Contest: contest-1
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/609578#problem/C
// Memory Limit: 1024
// Time Limit: 2000
// Start: Mon 12 Feb 2024 05:54:19 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
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
  vector<int> v(n);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end());
  int a = v[0];
  for (int i = 1; i < n; i++) {
    a = gcd(a, abs(v[i - 1] - v[i]));
  }
  cout << a;
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
