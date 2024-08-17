// ﷽
// Contest: Educational Codeforces Round 166 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1976/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 01 Jun 2024 07:47:52 PM EEST
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
  int minx=INT_MAX,maxx=-1;
  vector<int>a(n);
  vector<int>b(n);
  for(auto & i:a)
  {
    cin>>i;
  }

  for(auto & i:b)
  {
    cin>>i;
  }
  int x;
  int ans=0;

  cin>>x;
  debug(a);
  debug(b);
  debug(x);
  for(int i=0;i<n;i++)
  {
    if(x!=-1&&(min(a[i],b[i])<=x&&max(a[i],b[i])>=x))
    {
      ans++;
      x=-1;
    }

    ans+=abs(a[i]-b[i]);
  }
  if(x!=-1)
  {
    int t=INT_MAX;
  for(auto & i:a)
  {
    t=min(t,abs(x-i));
  }

  for(auto & i:b)
  {
    t=min(t,abs(x-i));
  }
  ans+=t+1;
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
