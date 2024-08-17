// ﷽
// Contest: Educational Codeforces Round 41 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/961/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 09 May 2024 04:18:15 PM EEST
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

vector<int>a;
vector<int>aa;
vector<int>b;
void solve() {
  int n,k;
  cin>>n>>k;
  a=vector<int>(n+1,0);
  aa=vector<int>(n+1,0);
  b=vector<int>(n+1);
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  for(int i=1;i<=n;i++)
  {
    cin>>b[i];
  }

  for(int i=1;i<=n;i++)
  {
    aa[i]=a[i]*b[i]+aa[i-1];
    a[i]+=a[i-1];
  }

  int su=-1;
  for(int i=0;i<=n-k;i++)
  {
    su=max(su,aa[n]+(a[i+k]-a[i])-(aa[i+k]-aa[i]));
  }
  debug(su);
  cout<<su;
  debug(a);
  debug(aa);
  debug(b);

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
