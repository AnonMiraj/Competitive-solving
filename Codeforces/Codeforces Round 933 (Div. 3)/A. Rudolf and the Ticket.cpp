// ﷽
// Contest: Codeforces Round 933 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1941/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 12 Mar 2024 02:10:19 AM EET
// Reading Time : 2
// Thinking Time : 3
// Coding Time : 5
// Comments : binary search yohoo very simple i need to have more confident
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
  int n,m,k;
  cin>>n>>m>>k;
  int a[n],b[m];
  for (auto &i  : a) {
 cin>>i; 
  }
  for (auto &i  : b) {
 cin>>i; 
  }
  sort(b,b+m);
  int ans=0;
  for (int i=0;i<n ;i++) {
    auto ff=upper_bound(b,b+m,k-a[i]);
    ans+=ff-b;
  
  }
  cout<<ans<<'\n';
  
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
