// ﷽
// Contest: The 2023 ICPC Egyptian Collegiate Programming Contest (Qualifications Day 5)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/530046/problem/G
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 05 Jul 2024 06:03:35 PM EEST
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

int l,r;
int dp(int num,int sum,int gc)
{
  if(sum>r&&sum<l)
    return 0;
  if(gc!=1)
    return 0;
  if(num>r)
    return 0;



  return dp(num+1,num,num)+dp(num+1,sum+num,gcd(num,gc))+dp(num,sum+num,gcd(num,gc))+dp(num+1,sum,gc)+1;

}

void solve() {
  cin>>l>>r;
  cout<<dp(0,0,1);


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
