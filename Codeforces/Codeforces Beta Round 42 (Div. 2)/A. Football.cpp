// ﷽
// Contest: Codeforces Beta Round 42 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/43/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 14 Apr 2024 10:43:29 PM EET
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
  map<string,int>m;
  string s;
  for (int  i = 0; i < n; i++) {
    cin>>s;
    m[s]++;
  }
  int ans=-1;
  for (auto &i :m) {
    if (i.second> ans) {
      s=i.first;
      ans=i.second;
    }
  }
  cout<<s;
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
