// ﷽
// Contest: Codeforces Round 971 (Div. 4)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2009/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 03 Sep 2024 06:08:47 PM EEST
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
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v0(n+3);
  vector<int> v1(n+4);
  int x,y;
  for (int i = 0; i < n; i++) {
    cin>>x>>y;
    if(y)
      v1[x]=1;
    else
      v0[x]=1;
  }
  debug(v1);
  debug(v0);
  int ans=0;

  for (int i = 0; i <= n; i++) {
    if(v1[i]==v0[i]&&v0[i]==1)
      ans+=n-2;
    if(v1[i-1]==v1[i+1]&&v0[i]&&v1[i-1])
      ans++;
    if(v0[i-1]==v0[i+1]&&v1[i]&&v0[i-1])
      ans++;
  }
  cout<<ans<<"\n";

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
