// ﷽
// Contest: Codeforces Round 358 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/682/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 13 May 2024 12:36:50 AM EEST
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
  int arr[n+1];
  arr[n]=0;
  for(auto &i:arr)
    cin>>i;
  sort(arr,arr+n);
  int mex=1;
  for(int i=-1;i<n;i++)
  {
    if(i!=-1&&arr[i]==mex)
    mex++;

    if(arr[i+1]>mex)
    {
      arr[i+1]=mex;

    }
  }
  debug_itr(arr,arr+n);
  cout<<mex<<"\n";





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
