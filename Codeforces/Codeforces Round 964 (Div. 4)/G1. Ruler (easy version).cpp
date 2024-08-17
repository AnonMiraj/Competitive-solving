// ﷽
// Contest: Codeforces Round 964 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1999/problem/G1
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 06 Aug 2024 07:17:43 PM EEST
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
  int a=1,b=1000;
  int l=a,r=b;
  int an;
  while (l<r) {
    int mid = (l+r)/2;
    int midl = (mid+l)/2;
    int midr = (r+mid)/2;
    cout<<"? "<< midl<<" " <<midr<<endl;
    cin>>an;
    if (an == midr * midl) {
      l=midr+1;
    }
    else if (an == (midr+1) * (midl))
    {
      l=midl+1;
      r=midr-1;
    }
    else {
    
      r=midl-1;
    }
  }

  cout<<"! "<<l<<endl;



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
