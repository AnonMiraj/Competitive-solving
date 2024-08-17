// ﷽
// Contest: Codeforces Round 948 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1977/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 26 May 2024 05:43:22 PM EEST
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


void solve() {

  int x;
  cin >> x;
  vector<int> bit;
  bitset<33> bs(x);
  for (int i = 0; i < 33; ++i) {
    bit.push_back(bs[i]);
  }
  int cnt=0,p1=-1;
  for(int i=0;i<32;i++)
  {
    if(bit[i])
    {
      if(p1==-1)
        p1=i;
      cnt++;
    }
    else 
    {
      if(cnt>1)
      {
        bit[p1]=-1;
        p1++;
        while(p1!=i)
        {
          bit[p1]=0;
          p1++;
        }
        bit[p1]=1;
        cnt=1;
      }
      else
        p1=-1,cnt=0;
      
       


    }


  }
  cout<<32<<"\n";

  for(int i=0;i<32;i++)
  {
    cout<<bit[i]<<" ";
  }
  cout<<"\n";
  debug(bs);
  debug(bit);
  debug();
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
