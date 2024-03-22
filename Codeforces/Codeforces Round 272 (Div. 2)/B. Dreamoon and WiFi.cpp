// ﷽
// Contest: Codeforces Round 272 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/476/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 25 Feb 2024 06:25:07 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <ios>
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
  string s1, s2;
  cin >> s1 >> s2;
  int n1 = 0, n2 = 0, q = 0;
  for (char &i : s1) {
    if (i == '+') {
      n1++;
    } else {
      n1--;
    }
  }
  for (char &i : s2) {
    if (i == '+') {
      n2++;
    } else if (i == '-') {
      n2--;
    } else {
      q++;
    }
  }
  cout << fixed;

  if (n2 + q >= n1 && n1 >= n2 - q) {
    cout << pow(2, -abs(n2-q)+1);
  } else {
    cout << 0;
  }
  // cout<<n1<<" "<<n2<<" "<<q;
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
