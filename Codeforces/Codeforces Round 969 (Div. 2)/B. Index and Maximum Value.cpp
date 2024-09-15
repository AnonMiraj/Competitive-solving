// ﷽
// Contest: Codeforces Round 969 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2007/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 30 Aug 2024 05:56:02 PM EEST
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
  int n,m;
  cin >> n>>m;
  vector<int> a(n);
  int ma=0;
  for (int i = 0; i < n; i++) {
      cin >> a[i];
      ma=max(a[i],ma);
  }
  char c;
  int l,r;
  while(m--)
  {
    cin>>c>>l>>r;
    if(c=='+')
    {
      if(ma>=l&&ma<=r)
        ma++;

    }
    else
    {

      if(ma>=l&&ma<=r)
        ma--;
    }
    cout<<ma<<" ";

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