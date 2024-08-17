// ﷽
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/c
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 30 Mar 2024 07:01:04 AM EET
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
  int h,m;
  char x;
  cin>>h>>x>>m;
  if (h>=12) {
    cout<<std::setfill('0') << std::setw(2) <<(h==12? 12 :h-12)<<x<< std::setw(2)<<m<<" PM\n";
  }
  else
    cout<<std::setfill('0') << std::setw(2)<<(h==0? 12 :h)<<x<< std::setw(2)<<m<<" AM\n";
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
