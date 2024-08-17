// ﷽
// Contest: Team Contest #1
// Judge: Codeforces
// URL: https://codeforces.com/group/qxlLGDBwj5/contest/528100/problem/J
// Memory Limit: 1024
// Time Limit: 1000
// Start: Mon 24 Jun 2024 12:59:59 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

#ifdef ALGOAT
#include"debug.hpp"
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

  int n,k;
  string s;

  map<pair<int,int>,int > m;
int f(int l,int r,int length)
{
  if(l>=n)
    return (k-min(length,k))/2;
  if(r<0)
    return (k-min(length,k))/2;
  if(l>=r)
    return (k-min(length,k))/2;
  if(length>k)
    return (k-min(length,k))/2;
  int a =INT_MAX,b, c;
  if(m.find({l,r})!=m.end())
    return m[{l,r}];

  b=f(l,r-1,length);
  c=f(l+1,r,length);
  if(s[l]==s[r])
    a=f(l+1,r-1,length+2);
  return   m[{l,r}]=min({a,b,c});
}
void solve() {
  cin>>n>>k>>s;

  cout<<(f(0,n,0));
  // abca
  // aa
  // 4-2 
  //
  // 

}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  while (n--)
    solve();
  return 0;
}
