// ﷽
// Contest: Codeforces Round 479 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/977/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 05 Jun 2024 01:05:22 AM EEST
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

  int n,k;
  cin>>n>>k;
  while(k--)
  {
    if(n%10)
    {
      n--;
    }
    else 
      n/=10;

  }
  cout<<n;

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
