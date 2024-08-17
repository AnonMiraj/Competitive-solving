// ﷽
// Contest: Team Formation 24
// Judge: Codeforces
// URL: https://codeforces.com/group/EhYxAu9AgP/contest/515802/problem/L
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 11 Apr 2024 10:26:43 PM EET
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
  int n, k;
  cin >> n >> k;
  int arr[n];
  int ans[n] = {};

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int an = n;
  int a, b, turn = 1;
  int ind;
  while (an) {
    ind = max_element(arr, arr + n) - arr;
    a = 0, b = 0;
    arr[ind] = 0;
    ans[ind] = turn;
    an--;
    for (int i = ind + 1; i < n && b != k;) {
      if ((!ans[i]) && arr[i]) {
        b++;
        arr[i] = 0;
        ans[i] = turn;
        an--;
      }
      i++;
    }
    for (int i = ind - 1; i >= 0 && a != k;) {
      if ((!ans[i]) && arr[i]) {
        a++;
        arr[i] = 0;
        ans[i] = turn;
        an--;
      }
      i--;
    }
    turn ^= 3;
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i];
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
