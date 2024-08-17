// ﷽
// Contest: Codeforces Round 953 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1978/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 17 Jun 2024 11:36:18 PM EEST
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
int n,s;
int su(vector<int>&a)
{
  int ss=0;
  for(int i=1;i<=n;i++)
  {

    ss+=abs(a[i-1]-i);
  }


  return ss;
}


void solve() {
  cin>>n>>s;
  vector<int> a(n);
  for(int i =0;i<n;i++)
  {
    a[i]=n-i;
  }
  debug(a);
  int ma=su(a);

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
