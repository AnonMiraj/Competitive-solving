// ﷽
// Contest: Codeforces Round 943 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1968/problem/F
// Memory Limit: 256
// Time Limit: 5000
// Start: Thu 02 May 2024 07:24:55 PM EEST
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
  int n,x;
  cin>>n>>x;
  int arr[n]={};
  int pref[n+1]={};
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    pref[i+1]=arr[i]^pref[i];
  }
  debug_itr(pref+1,pref+n+1);

  int l,r;
  for(int i=0;i<x;i++)
  {
    cin>>l>>r;
    debug(arr[l-1],arr[r-1]);
    debug(pref[l],pref[r]);
  }
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
