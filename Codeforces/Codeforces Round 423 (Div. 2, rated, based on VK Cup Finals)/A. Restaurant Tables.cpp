// ﷽
// Contest: Codeforces Round 423 (Div. 2, rated, based on VK Cup Finals)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/828/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 19 Sep 2024 05:19:06 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

void solve() {
  int n,a,b;
  int c=0;
  cin>>n>>a>>b;
  int x;
  int ans=0;
  for (int i = 0; i < n; i++) {
      cin>>x;
      if(x==1)
      {
        if(a)
        {
        a--;
        }
        else if(b)
        {
          b--;
          c++;

        }
        else if(c)
          c--;
        else 
          ans++;
      }
      else
      {
        if(b)
          b--;
        else 
          ans+=2;

      }

  }
  cout<<ans;

}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}
