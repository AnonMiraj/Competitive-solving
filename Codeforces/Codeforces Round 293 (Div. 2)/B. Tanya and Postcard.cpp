// ﷽
// Contest: Codeforces Round 293 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/518/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 09 Nov 2024 10:11:10 AM EET
// Reading Time : 1
// Thinking Time : 1
// Coding Time : 4
// Debug Time :
// Submit Count :  3
// Problem Level : 1
// Category : adhoc , string
// Comments : very easy problem but still got wrong answer i hate it 
#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

void solve() {
  string s;
  string t;
  cin >> s >> t;
  map<char, int> mt;
  map<int, int> bruh;
  for (auto i : t) {
    mt[i]++;
  }
  int ya = 0, who = 0;
  int n= s.size();
  for (int i = 0; i < n; i++) {
    if (mt[s[i]]) {
      mt[s[i]]--;
      ya++;
      bruh[i] = 1;
    }
    if (!bruh[i] && mt[char(s[i] ^ 32)]) {
      mt[char(s[i] ^ 32)]--;
      who++;
    }
  }
  cout << ya << " " << who << "\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--) solve();
  return 0;
}
