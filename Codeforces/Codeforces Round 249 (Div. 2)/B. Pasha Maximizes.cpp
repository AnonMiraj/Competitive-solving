// ﷽
// Contest: Codeforces Round 249 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/435/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 23 Aug 2024 03:13:51 PM EEST
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
  int k;
  cin>>s;
  cin>>k;
  int n=s.size();
  for(int i=0;k&&i<n;i++)
  {
    int ind=max_element(s.begin()+i,s.begin()+min(i+k+1,n))-s.begin();
      for(int j=ind;k&&j>i;j--)
      {
        if(s[j]>s[i])
          swap(s[j],s[j-1]);
          k--;
      }
  }
  cout<<s;

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
