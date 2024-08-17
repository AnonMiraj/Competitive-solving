// ﷽
// Contest: Team Formation 24
// Judge: Codeforces
// URL: https://codeforces.com/group/EhYxAu9AgP/contest/515802/problem/D
// Memory Limit: 256
// Time Limit: 1500
// Start: Thu 11 Apr 2024 07:23:57 PM EET
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
  int n,x;
  cin>>n>>x;
  int arr[n+1];
  arr[0]=0;
  for (int  i = 1 ; i <= n; i++) {
    cin>>arr[i];
    arr[i]+=arr[i-1];
  }
  debug_itr(arr,arr+n+1);
  int p1=1,p2=1;
  int ans=INT_MAX;
  int ind=INT_MAX;
  while (p2!=n+1) {
    if (arr[p2]-arr[p1-1]>=x) {
      ans=min(p2-p1+1,ans);
      p1++;
    }
    else
      p2++;
    
  }
  cout<<(ans==INT_MAX? -1 : ans);
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
