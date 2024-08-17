// ﷽
// Contest: AtCoder Beginner Contest 351
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc351/tasks/abc351_b
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat 27 Apr 2024 03:12:46 PM EEST
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
  vector<pair<char,char>> v(n*n);
  for(auto &i:v){
    cin>>i.first;
  }
  for(int i=0;i<n*n;i++){
    cin>>v[i].second;
    if(v[i].second!=v[i].first)
    {
      cout<<i/n+1<<" "<<i%n+1;
      return;
    }
  }

  
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
