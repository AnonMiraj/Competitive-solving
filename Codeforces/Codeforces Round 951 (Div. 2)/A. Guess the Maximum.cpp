// ﷽
// Contest: Codeforces Round 951 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1979/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 06 Jun 2024 05:39:08 PM EEST
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
  int arr[n];
  for(int &i:arr)
    cin>>i;

  int ans =INT_MAX;
  for(int i =1 ;i<n;i++)
  {
    ans=min(max(arr[i],arr[i-1]),ans);


  }

  
  cout<<ans-1<<"\n";
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
