// ﷽
// Contest: Codeforces Round 930 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1937/problem/b
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 02 Mar 2024 06:15:35 PM UTC
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
  string a, b;
  cin >> a >> b;

  int an = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] == b[i - 1]) {
      ++an;
    } else {
      if (a[i] == '1') {
        break;
      }
      an = 1;
      b[i - 1] = a[i];
    }
  }
  cout<<a[0]<<b<<'\n'<<an<<'\n';
  // cout<<s<<endl;
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
