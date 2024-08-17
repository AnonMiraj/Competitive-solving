// ﷽
// Contest: START133B
// Judge: CodeChef
// URL: https://www.codechef.com/START133B/problems/MXALT
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 08 May 2024 05:30:18 PM EEST
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

  sort(arr,arr+n,greater<>());
  int to=ceil(n/2.f);
  debug(to);
  int su=0;
  for(int i =0;i<n;i++)
  {
    if(to>0)
      su+=arr[i],to=max(0LL,to-1);
    else
      su-=arr[i];
    debug(su);
  }
  cout<<su<<"\n";
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
