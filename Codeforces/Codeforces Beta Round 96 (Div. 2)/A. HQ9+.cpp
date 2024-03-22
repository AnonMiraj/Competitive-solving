// ﷽
// Contest: Codeforces Beta Round 96 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/133/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 07 Mar 2024 08:16:46 PM EET
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
  string s;
  cin>>s;
  for (char &i  : s) {
    if (i=='H'||i=='Q'||i=='9') {
      cout<<"YES";
      return;
    
    }
  
  }
  cout<<"NO";
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
