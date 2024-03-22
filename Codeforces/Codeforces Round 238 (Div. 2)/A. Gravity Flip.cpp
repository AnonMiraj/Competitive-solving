// ﷽
// Contest: Codeforces Round 238 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/405/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 10 Mar 2024 02:59:18 AM EET
// Reading Time : 0
// Thinking Time : 
// Coding Time : 1
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
  for (int & i  : arr) {
    cin>>i;
  }
  sort(arr,arr+n);
  for (int & i  : arr) {
    cout<<i<<" ";
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
