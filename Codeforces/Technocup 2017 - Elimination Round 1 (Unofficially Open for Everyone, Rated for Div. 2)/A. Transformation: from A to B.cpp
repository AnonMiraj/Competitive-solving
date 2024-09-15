// ﷽
// Contest: Technocup 2017 - Elimination Round 1 (Unofficially Open for Everyone, Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/727/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 24 Aug 2024 09:38:01 PM EEST
// Reading Time : 1
// Thinking Time : 2
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
  int a,b;
  cin>>a>>b;

  vector<int> v;
  function<int(int)> dfs = [&](int p){
    if(p>b)
      return 0;
    if(p==b)
    {

      v.push_back(p);
      return 1;
    }
    int xa,xb;
    xa=dfs(p*2);
    xb=dfs(p*10+1);
    if(xa+xb)
    {
      v.push_back(p);
      return 1;
    }
      return 0;
  };

  dfs(a);
  reverse(all(v));
  if(v.size())
  {
    cout<<"YES\n";
    cout<<v.size()<<"\n";

  for (auto i : v) {
    cout<<i<<" ";
  }
  return;
  }
  
    cout<<"NO\n";
    

}
int32_t main() {

  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--)
    solve();
  return 0;
}
