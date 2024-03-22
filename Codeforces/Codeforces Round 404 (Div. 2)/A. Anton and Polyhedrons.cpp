// ﷽
// Contest: Codeforces Round 404 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/785/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 09 Feb 2024 03:31:31 PM UTC
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

  int n;
  cin >> n;
  int ans = 0;
  string s;
  
  for (int i = 0; i < n; i++) {
    cin >> s;
    switch (s[0]) {
    case 'T':
      ans += 4;
       break;
    case 'C':
      ans += 6;
       break;
    case 'O':
      ans += 8;
       break;
    case 'D':
      ans += 12;
       break;
    case 'I':
      ans += 20;
       break;
    }
    
  }
  cout<<ans;
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
