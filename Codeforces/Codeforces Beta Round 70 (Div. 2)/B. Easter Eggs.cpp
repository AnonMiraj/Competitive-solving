// ﷽
// Contest: Codeforces Beta Round 70 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/78/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 16 Feb 2024 09:25:02 AM UTC
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
  string s ="ROYGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIVGBIV";
  cout<<s.substr(0,n);

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
