// ﷽
// Contest: Codeforces Round 967 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2001/problem/a
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 20 Aug 2024 07:15:07 PM EEST
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
  int n;
  cin>>n;
  map<int,int> m;
  int t;
  for(int i=0;i<n;i++)
  {

    cin>>t;
    m[t]++;
  }
  t=-1;
  for(auto [a,b]:m)
    t=max(t,b);
  cout<<n-t<<"\n";


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
