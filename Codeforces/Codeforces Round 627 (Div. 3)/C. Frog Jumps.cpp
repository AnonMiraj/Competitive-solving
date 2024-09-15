// ﷽
// Contest: Codeforces Round 627 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1324/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 18 Aug 2024 10:31:31 PM EEST
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
  string s;
  cin>>s;
  s= 'R' + s + 'R';
  debug(s);
  int ind=s.find('R');
  int ind2;
  int ans=-1;
  while(ind!=string::npos)
  {
    ind2 = s.find('R',ind+1);
    ans= max(ans,ind2-ind);
    ind=ind2;
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
