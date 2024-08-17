// ﷽
// Contest: Codeforces Round 849 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1791/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 24 Mar 2024 12:15:51 AM EET
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
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
#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int x=0,y=0;
  int n;
  cin>>n;
  string s;
  cin>>s;
  for (size_t i = 0; i < s.size(); i++) {
    switch (s[i]) {
      case 'U':
        y++;
        break;
      case 'D':
        y--;
        break;
      case 'R':
        x++;
        break;
      case 'p':
        x--;
        break;
    }
    if (x==1&&y==1) {
      cout<<"YES\n";
      return;
      
    }
    
  }
  cout<<"NO\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
