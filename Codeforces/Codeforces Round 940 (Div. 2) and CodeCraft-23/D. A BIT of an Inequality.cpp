// ﷽
// Contest: Codeforces Round 940 (Div. 2) and CodeCraft-23
// Judge: Codeforces
// URL: https://codeforces.com/contest/1957/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 21 Apr 2024 05:17:41 PM EET
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
  int n;
  cin >> n;
  vector<int> arr(n);
  vector<int> pref(n + 1, 0);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    pref[i + 1] = arr[i];
    pref[i + 1] ^= pref[i];
  }
  int ihatemylife=0;
  
  debug(pref);
  debug(arr);
  for (int x = 1; x <= n; x++) {
    for (int y = x; y <= n; y++) {
      for (int z = y; z <= n; z++) {

        if (((pref[x-1]^pref[y])^(pref[y-1]^pref[z]))>(pref[x-1]^pref[z])) {

          cerr<<(pref[x-1]^pref[y]^pref[y-1]^pref[z])<<" "<<(pref[x-1]^pref[z])<<"\n";
          debug(x,y,z);
        ihatemylife++;

        }
      }
    }
  }
  debug(ihatemylife);
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
