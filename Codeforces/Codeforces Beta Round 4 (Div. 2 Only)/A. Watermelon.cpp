// ﷽
// Contest: Codeforces Beta Round 4 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/4/A
// Memory Limit: 64
// Time Limit: 1000
// Start: Mon 04 Mar 2024 11:19:38 PM EET
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
  int n;
  cin>>n;
  cout<<(n&1? "NO":"YES");
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
