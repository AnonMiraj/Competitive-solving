// ﷽
// Contest: Codeforces Round 929 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1933/problem/C
// Memory Limit: 256
// Time Limit: 5000
// Start: Tue 27 Feb 2024 03:07:22 PM UTC
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
  int a, b, l;
  cin >> a >> b >> l;

  int ca = 0, cb = 0;
  int la = l, lb = l;
  while (la > 1) {
    ca++;
    la /= a;
  }
  while (lb > 1) {
    cb++;
    lb /= b;
  }

  set<int> k;
  int n = 0;
  for (int x = 0; x <= ca; x++) {
    for (int y = 0; y <= cb; y++) {
      int valb = pow(a, x) * pow(b, y);
      int val = l / valb;
      if (val * valb == l) {
      k.insert(val);
      }
    }
  }
  cout << k.size() << endl;
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
