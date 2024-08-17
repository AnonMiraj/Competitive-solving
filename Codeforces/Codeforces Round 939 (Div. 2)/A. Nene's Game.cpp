// ﷽
// Contest: Codeforces Round 939 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1956/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 13 Apr 2024 04:41:48 PM EET
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

void solve() {
  int k, q;
  cin >> k >> q;
  int qarr[k];
  int arr[q];
  int x=INT_MAX;
  for (int i = 0; i < k; i++) {
    cin >> qarr[i];
    x=min(qarr[i],x);
  }

  for (int i = 0; i < q; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < q; i++) {
    cout<<min(x-1,arr[i])<<" ";
  }
  cout << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
