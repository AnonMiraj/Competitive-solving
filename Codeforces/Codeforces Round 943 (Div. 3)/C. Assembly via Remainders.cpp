// ﷽
// Contest: Codeforces Round 943 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1968/problem/c
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 02 May 2024 06:03:59 PM EEST
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
  int arr[n];
  int ans[n]={};
  int ma=-1;
  for(int i=0;i<n-1;i++)
  {

    cin>>arr[i];
    ma=max(ma,arr[i]);
  }


  ans[0]=ma+1;
  for(int i=1;i<n;i++)
  {
      ans[i]=ans[i-1]+arr[i-1];

  }

  for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
  cout<<"\n";
  debug();

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
