// ﷽
// Contest: Pinely Round 4 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1991/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 30 Jul 2024 04:30:16 AM EEST
// Reading Time : 2
// Thinking Time :  13
// Coding Time : 5
// Comments : 
#include<bits/stdc++.h>
#include <vector>
 
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
  vector<int >v(n-1),ans(n);
  for (auto &i  : v) {
    cin>>i;
  }
  ans[0]=v[0];
  ans[n-1]=v[n-2];
  for(int i=1;i<n-1;i++)
  {
    ans[i]=v[i]|v[i-1];
  }
  for(int i=1;i<n;i++)
  {
    if ((ans[i]&ans[i-1])!=v[i-1]) {
      cout<<-1<<"\n";
      return;
    
    }
  }
  for(auto i : ans)
    cout<<i<<" ";
  cout<<"\n";
  debug(ans);


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
