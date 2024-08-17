// ﷽
// Contest: AtCoder Beginner Contest 352
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc352/tasks/abc352_b
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sun 05 May 2024 12:01:32 AM EEST
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

using namespace std;

void solve() {
  string s;
  string st;
  cin>>s>>st;
  int p1=0;
  for(int i=0;i<st.size();i++)
  {
    if(st[i]==s[p1])
    {
      cout<<i+1<<" ";
      p1++;
    }

  }

}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
