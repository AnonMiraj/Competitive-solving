// ﷽
// Contest: Codeforces Round 953 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1978/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 17 Jun 2024 11:09:49 PM EEST
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

int super(int n)
{
  return n*(n+1)/2;
}
void solve() {
  int n,a,b;
  cin>>n>>a>>b;
  b=max(b,a);
  int su=n-max(b-a,0LL);
  su=max(su,0LL);
  su*=a;

  su +=max(min(b-a,n),0LL)*(b);
  debug(su);

  su -= super(max(min(b-a,n)-1,0LL));
  
  cout<<su<<'\n';

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
