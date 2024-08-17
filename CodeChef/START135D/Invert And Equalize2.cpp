// ﷽
// Contest: START135D
// Judge: CodeChef
// URL: https://www.codechef.com/START135D/problems/INVEQ
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 22 May 2024 06:07:26 PM EEST
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
int lcm(int a,int b)
{
return (a*b)/__gcd(a,b);}

void solve() {
  int a,b,k;
  cin>>a>>b>>k;
  int cnt=0;
  int t=a;
  while(t*k<=b)
  {
    t*=k;
    cnt++;
  }
  debug(cnt+b-t);
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
