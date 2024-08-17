// ﷽
// Contest: Codeforces Round 949 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1981/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 31 May 2024 05:23:30 PM EEST
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long

using namespace std;

int getbutuptoN(int x,int ind)
{
  return x&((1LL<<(ind+1LL)) -1LL);
}
int getminus(int n,int ind)
{
  if(n-(getbutuptoN(n,ind)+1LL)<0)
  {
    return 1e9;
  }
  return getbutuptoN(n,ind)+1LL;
}

int getplus(int n,int ind)
{
  return getbutuptoN(~getbutuptoN(n,ind),ind-1)+1LL;
}

int n, m;
void solve() {
  cin>>n>>m;

  int ans;
  bitset<36>bt(n);
  for(int i=0;i<36;i++)
  {
    if(!bt[i])
    {

      ans=min(getminus(n,i),getplus(n,i));
      debug(n);
      debug(getminus(n,i));
      debug(getplus(n,i));
      debug();

      if(ans>m)
        break;
      bt[i]=1;

    }
  }
  debug(bt);
  debug((unsigned int)(1LL<<31)-1);
  cout<<min(bt.to_ullong(),(unsigned int)(1LL<<32)-1)<<"\n";

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
