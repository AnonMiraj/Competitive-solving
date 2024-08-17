// ﷽
// Contest: Codeforces Round 101 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/141/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 29 May 2024 08:46:42 PM EEST
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
  int a,x,y;
  cin>>a>>x>>y;
  if(!(y%a))
  {
    cout<<-1<<"\n";
    return;
  }
  int towN=ceil(y/(float)a),bound=(a+1)/2;
  debug(bound);
  debug(towN);
  int prev=towN-1+(towN-2)/2;
  int cur=towN+(towN-1)/2;
  debug(prev,cur);
    if(cur-prev==2)
    {
      if(x<a&&x>0)
      {
        cout<<cur;
        return;

      }
      else if(x>-a&&x<0)
      {
        cout<<cur-1;
        return;
      }

    }
    else
    {

      if(x<bound&&x> -bound)
      {
        cout<<cur;
        return;
      }

    }


    cout<<-1<<"\n";
  
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
