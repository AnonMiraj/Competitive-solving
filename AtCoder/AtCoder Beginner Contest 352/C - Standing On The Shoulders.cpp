// ﷽
// Contest: AtCoder Beginner Contest 352
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc352/tasks/abc352_c
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sun 05 May 2024 12:07:17 AM EEST
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
  int arr[n][2];
  int x,y,su=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i][0]>>arr[i][1];
    su+=arr[i][0];

  }



  int sus=su+arr[0][1]-arr[0][0];
  for(int i=0;i<n;i++)
  {

    sus=max(sus,su+arr[i][1]-arr[i][0]);

  }



  cout<<sus;
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
