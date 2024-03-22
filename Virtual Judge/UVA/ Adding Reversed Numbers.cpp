// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-713
// Memory Limit: 1024
// Time Limit: 3000
// Start: Wed 14 Feb 2024 06:11:20 PM UTC
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
  string n1, n2, a = "";
  cin >> n1 >> n2;
  if (n1.size() >= n2.size()) {
    n2 += string(n1.size() - n2.size(), '0');
  } else {
    n1 += string(n2.size() - n1.size(), '0');
  }

  int val;
  int c = 0;
  for (int i = 0; i < n1.size(); i++) {
    val = n1[i] - '0' + n2[i] - '0' + c;
    c = val / 10;

    a += (val % 10 + '0');
  }
  if (c) {
    a += (c + '0');
  }

  a.erase(0, a.find_first_not_of('0'));

  // cout << n1 << '\n';
  // cout << n2 << '\n';
  cout << a << '\n';
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
