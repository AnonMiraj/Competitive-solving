// ﷽
// Contest: Codeforces Round 900 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1878/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 23 May 2024 01:11:35 AM EEST
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
  return (n*n+n)/2;

}
void solve() {
  int n,k,x;
  debug(super(9));
  debug(super(6));
  cin>>n>>k>>x;
  if((super(n)-super(n-k))>=x&&super(k)<=x)
    cout<<"YES\n";
  else
    cout<<"NO\n";

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
