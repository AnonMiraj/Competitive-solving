// ﷽
// Contest: Codeforces Round 302 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/544/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 16 May 2024 09:00:40 PM EEST
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
  int a=0;
  if(k>((n*n+1)/2))
    return void(cout<<"NO");
cout<<"YES\n";
  for(int i=0;i<n;i++)
  {
  for(int j=0;j<n;j++)
  {
    a^=1;
    if(a&&k)
    {
      cout<<"L";
      k--;
    }
    else
      cout<<"S";

  }
  if(!(n&1))
    a^=1;
  cout<<"\n";

  }


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
