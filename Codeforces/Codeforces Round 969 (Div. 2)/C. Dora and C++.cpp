// ﷽
// Contest: Codeforces Round 969 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2007/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 30 Aug 2024 06:22:25 PM EEST
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
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {
  int n,a,b;
  cin >> n>>a>>b;
  int g=gcd(a,b);
  vector<int> ar(n);

  int l=1;
  for (int i = 0; i < n; i++) {
      cin >> ar[i];
      l=lcm(ar[i],l);
  }

  int mi,ma;
  int ans=LLONG_MAX;
  for(int j=0;j<=100;j++)
  {
    ma=-LLONG_MAX ;
    mi=LLONG_MAX ;
  for (int i = 0; i < n; i++) {
      int d=j*l-ar[i];
      int k=ar[i]+((d) / g) * g;

      ma=max(k,ma);
      mi=min(k,mi);
  }
  ans=min(ans,ma-mi);
  
  }
  {
    ma=-LLONG_MAX ;
    mi=LLONG_MAX ;
  for (int i = 0; i < n; i++) {
      int d=l*l-ar[i];
      int k=ar[i]+((d) / g) * g;

      ma=max(k,ma);
      mi=min(k,mi);
  }
  ans=min(ans,ma-mi);
  
  }
  cout<<ans<<"\n";

}
int32_t main() {

  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
