// ﷽
// Contest: Codeforces Round 799 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1692/problem/G
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 13 May 2024 12:04:54 AM EEST
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
  int n,k;
  cin>>n>>k;
  int arr[n];
  int ans[n]={};
  ans[0]=1;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int cnt=1,an=0;
   for(int i=1;i<n;i++)
  {
    if(arr[i-1]<arr[i]*2)
    {
      ans[i]=1;
      cnt++;
    }
    else{
      an+=max(0LL,cnt-k);
      cnt=1;

    }


  } 

      an+=max(0LL,cnt-k);
      cnt=0;
   cout<<an<<"\n"; 

   debug_itr(ans,ans+n);
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
