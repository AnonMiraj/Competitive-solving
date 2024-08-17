// ﷽
// Contest: Codeforces Round 492 (Div. 2) [Thanks, uDebug!]
// Judge: Codeforces
// URL: https://codeforces.com/contest/996/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 05 May 2024 11:54:49 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

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

  int n;
  cin>>n;

  int arr[5]={1,5,10,20,100};
  int ans[5]={};
  for(int i=4;i!=-1;)
  {
    ans[i]=n/arr[i];
    n-=ans[i]*arr[i];
    i--;
  }
  cout <<accumulate(ans,ans+5,0);

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
