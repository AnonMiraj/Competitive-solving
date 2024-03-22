// ﷽
// Contest: Codeforces Round 405 (rated, Div. 2, based on VK Cup 2017 Round 1)
// Judge: Codeforces
// URL: https://codeforces.com/contest/791/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 24 Jan 2024 05:26:27 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <climits>
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
  int a,b;
  cin>>a>>b;
  int cnt=0;
  while (b>=a) {
    cnt++;
    b*=2;
    a*=3;
  }
  cout<<cnt;
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
