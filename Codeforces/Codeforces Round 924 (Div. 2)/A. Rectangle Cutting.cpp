// ﷽
// Contest: Codeforces Round 924 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1928/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 11 Feb 2024 09:37:52 AM UTC
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
  int a, b;
  cin >> a >> b;
  if((a&1)&&(b&1))
  {
    cout<<"NO\n";
    return;
  }
  if (b > a)
    swap(b, a);
  int c = a / 2;

  int e = a * 2;
  if (!(a & 1)) {
    if (c != b) {
      cout << "YES\n";
      return;
    }
  }
  if (!(b & 1)) {
    if (e != a) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
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
