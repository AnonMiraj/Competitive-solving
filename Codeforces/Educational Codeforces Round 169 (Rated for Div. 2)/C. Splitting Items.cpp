// ﷽
// Contest: Educational Codeforces Round 169 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2004/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 15 Aug 2024 05:43:43 PM EEST
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
#define sz(a) (int)(a).size()
#define pb push_back
#define F first
#define S second
#define vi vector<int>

using namespace std;

void solve() {
  int n;
  int k;
  cin>>n>>k;
  vi v(n);
  vi a;
  vi b;
  for(int &i:v)
    cin>>i;
  sort(all(v),greater<>());
  debug(v);

  for(int i=0;i<n;i++)
  {
    if(i&1)
      b.pb(v[i]);
    else 
      a.pb(v[i]);
  }

  for(int i=0;i<n/2;i++)
  {
    int mi=min(k,a[i]-b[i]);
    b[i]+=mi;
  }
  debug(a);
  debug(b);
  cout<<accumulate(all(a),0)-accumulate(all(b),0)<<endl;
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
