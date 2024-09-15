// ﷽
// Contest: unknown_contest
//
// Judge: Codeforces
// URL: https://m3.codeforces.com/contest/2009/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 03 Sep 2024 05:39:46 PM EEST
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
  cin>>n;
  vector<int> v(n);
  string s;
  for (int i = 0; i < n; i++) {
    cin>>s;
    if(s[0]=='#')
      v[i]=1;

    if(s[1]=='#')
      v[i]=2;
    if(s[2]=='#')
      v[i]=3;
    if(s[3]=='#')
      v[i]=4;
  }
  for (int i = 0; i < n; i++) {
    cout<<v[n-i-1]<<" ";
    
  }

  cout<<"\n";


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
