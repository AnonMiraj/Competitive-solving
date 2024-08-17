// ﷽
// Contest: To ECPC '24 - Contest #3 (Individual)
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/632920#problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 07 Jun 2024 05:35:52 PM EEST
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

int arr[59]={};

int n,a;

vector<vector<vector<int>>> memo(100, vector<vector<int>>(50 * 50, vector<int>(100, -1)));

int dp(int ind, int su, int am) {
    if (ind == -1) {
        return (su == am * a) ? 1 : 0;
    }
    
    if (memo[ind][su][am] != -1) {
        return memo[ind][su][am];
    }
    
    memo[ind][su][am] = dp(ind - 1, su + arr[ind], am + 1) + dp(ind - 1, su, am);
    return memo[ind][su][am];
}
void solve() {
  cin>>n>>a;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  cout<<dp(n-1,0,0)-1;

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
