// ﷽
// Contest: CodeTON Round 8 (Div. 1 + Div. 2, Rated, Prizes!)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1942/problem/C1
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 30 Mar 2024 05:37:57 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <deque>
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
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> v;
  deque<int> v1;
  deque<int> v2;
  for (int i = 0; i < x; i++) {
    cin >> y;
    v.push_back(y);
  }
  if (n == 3) {
    cout << 1 << "\n";
    return;
  }
  if (n == 4) {
    cout << 2 << "\n";
    return;
  }

  if (x==2) {
    if (abs(v[1]-v[0])==2) {
      cout<<1<<'\n';
    }
    else {
      cout<<0<<'\n';
    }
    
    return;
  }

      cout<<x-2<<'\n';
  debug(v);

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
