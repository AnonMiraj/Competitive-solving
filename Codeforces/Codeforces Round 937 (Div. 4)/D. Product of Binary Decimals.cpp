// ﷽
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/d
// Memory Limit: 256
// Time Limit: 3000
// Start: Sat 30 Mar 2024 07:08:15 AM EET
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

vector<int> pre;
vector<int> isb;
bool isBinaryNumber(int num) {
  while (num > 0) {
    int digit = num % 10;
    if (digit != 0 && digit != 1) {
      return false;
    }
    num /= 10;
  }
  return true;
}
bool an = 0;

void bf(int x) {

  if (isb[x]) {
    an = 1;
    return;
  }
  for (size_t i = 0; i < 32; i++) {
    if (x % pre[i] == 0) {
      bf(x / pre[i]);
    }
  }
}
void solve() {
  int n;
  cin >> n;
  bf(n);
  cout << (an>0? "YES\n":"NO\n");
  an = 0;
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();

  isb.assign(1e5+1, 0);
  isb[1] = 1;
  for (int i = 2; i <= 1e5+1; i++) {
    if (isBinaryNumber(i)) {
      isb[i] = 1;
      pre.push_back(i);
    }
  }
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
