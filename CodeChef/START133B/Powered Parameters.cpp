// ﷽
// Contest: START133B
// Judge: CodeChef
// URL: https://www.codechef.com/START133B/problems/POWPM
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 08 May 2024 05:42:07 PM EEST
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

int fast_power(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = res * a;
        if(res>1e9)
          return res;
        a = a * a ;
        b >>= 1;
    }
    return res;
}
void solve() {
  int n;
  int ans=0;
  cin>>n;
  int arr[n];
  for(int &i:arr)
    cin>>i;
  int ma = 1e9+1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==1)
    {
      ans+=n;
      continue;
    }
    for(int j=0;j<min(28LL,n);j++)
    {
      int c=fast_power(arr[i],j+1);
      if(c<=arr[j])
        ans++;
      if(c>ma)
        break;

      
    }

  }
  cout<<ans<<"\n";

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
