// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1634
// Memory Limit: 512
// Time Limit: 1000
// Start: Thu 04 Apr 2024 12:20:54 AM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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

int n, arr[101] = {}, x;
vector<int> dp;
int cnt=1e9;
int ma=1e9;
int d()
{
  
  for(int i=0;i<n;i++)
  {

  for(int su=0;arr[i]+su<=x;su++)
    if(su+arr[i]<=x)
    {
      if (dp[su] == ma) continue;
      dp[su+arr[i]]=min(dp[su+arr[i]],dp[su]+1);
    }
  }
  return dp[x];
}
void solve() {
  cin >> n >> x;
  dp=vector<int>(x+1,1e9);
  dp[0] = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cnt=d();
  cout<<(cnt==ma?-1:cnt);

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
