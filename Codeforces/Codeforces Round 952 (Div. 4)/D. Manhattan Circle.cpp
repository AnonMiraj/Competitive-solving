// ﷽
// Contest: Codeforces Round 952 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1985/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 11 Jun 2024 05:45:51 PM EEST
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
  int n,m;
  cin>>n>>m;
  vector<string> v(n+2);
  v[0]=string(m+2,'.');
  v[n+1]=string(m+2,'.');
  debug(v[0]);
  for(int i=1;i<=n;i++)
  {
    cin>>v[i];
    v[i]="."+v[i]+"." ;

  }
  if(n==1&&m==1)
    return void(cout<<"1 1\n");

  pair<int,int> up={-1,-1},down={-1,-1};
  for(int i=1;i<n+2;i++)
  for(int j=1;j<m+2;j++)
  {
    if(v[i][j-1]=='.'&&v[i][j]=='#'&&v[i][j+1]=='.')
    {
    if(up.first==-1)
    {
      up={i,j};
    }
      down={i,j};
    }
  }

  cout<<(up.first+down.first)/2<<" ";
  cout<<(up.second+down.second)/2<<"\n";




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
