// ﷽
// Contest: Educational Codeforces Round 163 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1948/problem/0
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 15 Mar 2024 04:36:54 PM EET
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int n;
  cin>>n;
  string s;
  for (int i=0 ; i<(n/2); i++) {
    if (i&1) {
      s+="AA";
    }
    else {
    s+="BB";
    }
  
  }
  
  if (n&1) {
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";
  cout<<s<<"\n";
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
