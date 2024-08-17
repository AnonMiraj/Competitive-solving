// ﷽
// Contest: Codeforces Round 945 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1973/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 17 May 2024 05:39:29 PM EEST
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
  int arr[3];
  cin>>arr[0]>>arr[1]>>arr[2];
  if((arr[0]+arr[1]+arr[2])&1)
  {
    cout<<-1<<"\n";
    return;
  }
  int ans=0;
  int q=1;
  while(arr[0]+arr[1]>arr[2])
  {
    arr[0]--;
    arr[1]--;
    ans++;


  }
  if(arr[0]+arr[1]==arr[2])
  {
    
    cout<<ans+arr[2]<<"\n";
    return;
  }
  if(arr[0]+arr[1]<arr[2])
  {
    
    cout<<ans+arr[0]+arr[1]<<"\n";
    return;
  }

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
