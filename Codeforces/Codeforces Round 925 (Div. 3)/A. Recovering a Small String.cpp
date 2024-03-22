// ﷽
// Contest: Codeforces Round 925 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1931/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 13 Feb 2024 07:15:41 PM UTC
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
  int x;
  cin >> x;
  x -= 3;
  string s = "aaa";
  int ind = 2;
  int a = min(25LL, x);

  while (x) {
    s[ind] += a;
    x -= a;
    a = min(25LL, x);
    if (s[ind]=='z') {
      ind--;
    
    }
  }
  cout<<s<<'\n';
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
