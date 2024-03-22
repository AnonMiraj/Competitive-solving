// ﷽
// Contest: Codeforces Round 922 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1918/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 30 Jan 2024 02:37:48 PM UTC
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
  int a, b, r;
  cin >> a >> b >> r;
  cout << abs((a^(a^b))-(b^(a^b)))<< endl;

  // cout<<abs<<" "<<abs((a^x2)-(b^x2))<<endl;

  // for (int i = 0; i < 15; i++) {
  // cerr << (a ^ i) << " " << (b ^ i) << '\n';
  // }
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
