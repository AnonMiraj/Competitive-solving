// ﷽
// Contest: Codeforces Round 218 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/371/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 06 Nov 2024 01:16:36 PM EET
// Reading Time : 2
// Thinking Time :  21
// Coding Time : 15
// Debug Time : 
// Submit Count : 2
// Problem Level : 3
// Category : binary search
// Comments : "was thinking of normal greedy then got side tracked with binary search relized how it really doesnt make sense to binary search since you can buy diffrent valus for ingredientsds back to greedy then back to binry search i keep forgeting how the problem work i am gonna binary search on the answer not the price finnaly solved faced a stupid overflow (: i hate numbers 
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
  cin >> s;
  vector<int> v_rec(3);
  vector<int> v_pos(3);
  vector<int> v_price(3);
  int r;
  for (auto i : s) {
    if (i == 'B') v_rec[0]++;

    if (i == 'S') v_rec[1]++;

    if (i == 'C') v_rec[2]++;
  }
  for (auto &i : v_pos) {
    cin >> i;
  }

  for (auto &i : v_price) {
    cin >> i;
  }
  cin >> r;
  debug(v_rec);
  debug(v_pos);
  debug(v_price);
  debug(r);
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    if (!v_rec[i]) v_pos[i] = 0, v_price[i] = 0;
  }
  function<bool(int)> can = [&](int p) {
    int rr = 0;
    for (int i = 0; i < 3; i++) {
      int need = v_rec[i] * p;
      need -= v_pos[i];
      need = max(0LL, need);
      debug(need, p);
      if (need > r) return 0;
      rr += v_price[i] * need;
      debug(rr);
      if (rr > r) return 0;
    }
    return 1;
  };

  int l = 0, ri = 1e16;
  while (l <= ri) {
    int mid = l + ((ri - l) / 2);
    if (can(mid))
      l = mid + 1;
    else
      ri = mid - 1;
  }
  cout << l - 1;
  debug(v_rec);
  debug(v_pos);
  debug(v_price);
  debug(r);
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
