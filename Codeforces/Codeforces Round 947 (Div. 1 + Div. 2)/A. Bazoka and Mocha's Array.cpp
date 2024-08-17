// ﷽
// Contest: Codeforces Round 947 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1975/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 25 May 2024 05:49:32 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <climits>
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

void solve() {
  int n;
  cin>>n;
  vector<int>v(n,-1);
  int t=0,i;
  int ans=0;
  for(i=0;i<n;i++)
  {
    cin>>v[i];
    if(i&&!ans&&v[i-1]>v[i])
    {
      ans=i;
    }
  }
  rotate(v.begin(),v.begin()+ans,v.end());
  if (is_sorted(v.begin(),v.end())) {
    cout<<"YES\n";
    return;
    
  }
    cout<<"NO\n";
  debug(ans,v);
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
