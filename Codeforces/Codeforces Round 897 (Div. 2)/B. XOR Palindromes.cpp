// ﷽
// Contest: Codeforces Round 897 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1867/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 22 Apr 2024 05:15:27 PM EET
// Reading Time : 3
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
  string s="0";
  cin>>s;
  for (int  i = 0; i < n/2; i++) {
    if (s[i]!=s[n-i-1]) {
      swap(s[i],s[n-i-1]);
    }
    else{
      s[i]='0';
      s[n-i-1]='0';

    }
  }
  cout<<0<<s<<endl;
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
