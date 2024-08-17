// ﷽
// Contest: Codeforces Round 966 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2000/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 13 Aug 2024 05:45:31 PM EEST
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
  cin>>n;
  vi v(n),vv(n+2);
  int ind=1;
  for(auto &i : v)
  {
    cin>>i;


  }
  debug(v);

  for(int i=0;i<n;i++)
  {

    vv[v[i]]=i+1;

    debug(vv);
    if(i)
    {
      if(!(vv[v[i]-1]||vv[v[i]+1]))
      {
        cout<<"NO\n";
        return;

      }





    }
  }
  cout<<"YES\n";


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
