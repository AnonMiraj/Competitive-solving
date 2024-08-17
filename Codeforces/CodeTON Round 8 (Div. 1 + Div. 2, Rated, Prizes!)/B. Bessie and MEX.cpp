// ﷽
// Contest: CodeTON Round 8 (Div. 1 + Div. 2, Rated, Prizes!)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1942/problem/B
// Memory Limit: 256
// Time Limit: 1500
// Start: Sat 30 Mar 2024 04:45:18 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdlib>
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
  int n;
  cin >> n;
  int arr[n];
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int t=n;
  for (int i = n-1; i >=0; i--) {
  ans[i]=t-arr[i];
  t=min(t,ans[i]);
  }
  for (int i = 0; i < n; i++) {
    cout<< ans[i]<<" ";
  }

  cout<<"\n";

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
