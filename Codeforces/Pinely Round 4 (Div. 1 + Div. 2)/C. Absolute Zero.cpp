// ﷽
// Contest: Pinely Round 4 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1991/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 30 Jul 2024 03:59:54 AM EEST
// Reading Time : 2
// Thinking Time :  18
// Coding Time : 5
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
 
using namespace std;
void solve() {
  int n;
  cin>>n;
  vector <int > a(n);
  vector <int > ans;
  for (auto &i  : a) {
    cin>>i;
  }
  int tt=40;
  int ma,mi;

    debug();
    debug(a);
  while(tt--){
    ma = *max_element(a.begin(),a.end());
    mi = *min_element(a.begin(),a.end());
    if(ma+mi==0)
    {
      cout<<ans.size()<<endl;
      for(auto  i  : ans) {
        cout<<i<<" ";
        
      }
      cout<<endl;
      return;
      
    }
    int mid= (ma+mi)/2;
    ans.push_back(mid);
    for (auto &i  : a) {
      i=abs(i-mid);
    }
    debug(a);




  }
  cout<<-1<<endl;


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
