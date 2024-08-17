// ﷽
// Contest: Codeforces Round 964 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1999/problem/E
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 06 Aug 2024 06:15:59 PM EEST
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
int super(int n)
{
  return (n *(n+1))/2;

}
int f(int n) {
  if (!n) {
    return 0;
  }
  return 1 + f(n / 3);
}
int pre[(int)2e5+10];
void solve() {
  int l, r;
  cin >> l >> r;
  int ans= f(l);
  
  cout<<pre[r]-pre[l]+ans*2<<"\n";
  debug(pre[3]);

}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  for (int  i = 1 ; i < 2e5+5; i++) {
    pre[i]=f(i);
    pre[i]+=pre[i-1];
  }
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
