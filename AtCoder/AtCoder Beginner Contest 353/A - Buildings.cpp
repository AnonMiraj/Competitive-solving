// ﷽
// Contest: AtCoder Beginner Contest 353
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc353/tasks/abc353_a
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat 11 May 2024 03:00:26 PM EEST
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
  int t,x;
  cin>>x;
  for(int i=1;i<n;i++)
  {
    cin>>t;
    if(t>x)
      return void(cout<<i+1);


  }
  cout<<-1;

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
