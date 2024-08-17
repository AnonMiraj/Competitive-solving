// ﷽
// Contest: Educational Codeforces Round 169 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2004/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 15 Aug 2024 06:45:00 PM EEST
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
  int n,q;
  cin>>n>>q;
  vi v;
  int nn=n;
  char c;
  while(nn--)
  {
    cin>>c;
    int i=0;
    switch(c)
    {
      case 'R':
        i|=1;
        break;

      case 'G':
        i|=2;
        break;

      case 'B':
        i|=4;
        break;

      case 'Y':
        i|=8;
        break;
    }

    cin>>c;

    switch(c)
    {
      case 'R':
        i|=1;
        break;

      case 'G':
        i|=2;
        break;

      case 'B':
        i|=4;
        break;

      case 'Y':
        i|=8;
        break;
    }
    v.pb(i);


  }
  debug(v);

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
