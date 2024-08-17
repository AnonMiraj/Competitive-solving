// ﷽
// Contest: Codeforces Global Round 26
// Judge: Codeforces
// URL: https://codeforces.com/contest/1984/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 09 Jun 2024 05:36:53 PM EEST
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
  int x;
  cin>>n;

  int s,ss;
  int f,ff;
  cin>>ss;
  cin>>s;

  for(int i=2;i<n-1;i++)
  {
    cin>>f;
  }
  cin>>ff;
  debug(s,ff);
  if(ff!=ss)
  {
    cout<<"YES\n";
    if(s!=ff)
    {
    cout<<"B";
    cout<<string(n-1,'R')<<'\n';
    }
    else
    {
    cout<<string(n-1,'R');
    cout<<"B\n";
    }
    return;
  }

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
