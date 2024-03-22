// ﷽
// Contest: Codeforces Round 386 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/746/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 10 Feb 2024 03:09:49 AM UTC
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
  string s;
  cin>>s;
  
  int eo=n&1;
  string ans="";
  for (size_t i = 0; i < n; i++) {
    
    if ((eo+i)&1) {
      ans+=s[i];
      
    }
    else {
    
      ans=s[i]+ans;
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
