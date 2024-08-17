// ﷽
// Contest: Codeforces Round 903 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1881/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 03 Jun 2024 02:16:45 AM EEST
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
  int arr[3];
  for (int  i = 0; i < 3; i++) {
    cin>>arr[i];
  }
  sort(arr,arr+3);
  if((arr[0]==arr[2])||(arr[2]%arr[0]==0&&arr[1]%arr[0]==0&&arr[1]+arr[2]<=5*arr[0]))
    cout<<"YES\n";
  else 
    cout<<"NO\n";
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
