// ﷽
// Contest: Codeforces Round 360 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/688/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 20 Feb 2024 04:39:59 PM UTC
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
  string s;
  cin >> s;
  for (int i =0 ; i<s.size() ; i++) {
    cout<<s[i];
  }
  for (int i =s.size()-1 ; i>=0 ; i--) {
    cout<<s[i];
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
