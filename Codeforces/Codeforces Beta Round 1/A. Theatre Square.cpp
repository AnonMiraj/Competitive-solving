// ﷽
// Contest: Codeforces Beta Round 1
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 08 Nov 2023 03:07:10 PM UTC
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
  int n, m, a;
  cin >> n >> m >> a;
  int b=ceil((double)n / a) ,c=ceil((double)m / a);
  cout <<b*c;
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
