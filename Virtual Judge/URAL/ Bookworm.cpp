// ﷽
// Contest: URAL
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/URAL-1638
// Memory Limit: 64
// Time Limit: 1000
// Start: Sun 25 Feb 2024 03:15:26 PM UTC
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
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  int n = abs(c - d);
  int book =a+2*b;
  if (c<d) {
  cout<<book*(n-1)+2*b;
  }
  else {
  cout<<(n+1)*(book)-2*b;
  }
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
