// ﷽
// Contest: Codeforces Round 934 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1944/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 16 Mar 2024 05:02:40 PM EET
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
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  vector<int> freq(n+1,0);
  for (auto &i : a) {
    cin >> i;
    freq[i]++;
  }
  for (auto &i : b) {
    cin >> i;
  }
  vector<int> ans, bns;
  int sn = 0;

  for (int i = 1; i <= n; i++) {
    if (freq[i]==1) {
      sn++;
      ans.push_back(i);
      ans.push_back(i);
    }
  }
  for (int i = 1; i <= n; i++) {
    switch (freq[i]) {
    case 0:
      bns.push_back(i);
      bns.push_back(i);
      break;
    case 2:
      ans.push_back(i);
      ans.push_back(i);
      break;
    }
  }
  sn =sn&1;

  int i;
  for (i = sn; i < 2 * k; i++) {
    cout << ans[i] << " ";
  }
  cout << "\n";
  for (i = sn; i < 2 * k; i++) {
    cout << bns[i] << " ";
  }
  cout << "\n";
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
