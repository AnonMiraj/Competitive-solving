
// ﷽
// Contest: Codeforces Round 986 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2028/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 10 Nov 2024 05:43:31 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Debug Time :
// Submit Count :
// Problem Level :
// Category :
// Comments :
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

#define MUTLI_CASE

using u128 = __uint128_t;
mt19937 rng = mt19937(random_device()());

void seed(int s) { rng = mt19937(s); }

int rand_int(int x, int y) { return uniform_int_distribution<int>(x, y)(rng); }
void solve(int nm, int bm, int cm) {
  u128 n = nm, b = bm, c = cm;
  if (cm == 0 && bm == 1) {
    cout << 0 << "\n";
    return;
  }
  

  int l = 0, r = n;
  while (l <= r) {
    u128 mid = l + (r - l) / 2;
    if (b * mid + c < n)
      l = mid + 1;
    else
      r = mid - 1;
  }

  if (bm == 0) {
    if (cm >= n)
      l = 0;
    else
      l = cm;
  }
  if (!cm && !bm && nm > 1) {
    l = nm + 1;
  }
  debug(l);
  int ans = nm - l;
  cout << ans << "\n";
  return;
  vector<int> v(nm);
  int ans2 = -1;
  for (int i = 0; i < nm; i++) {
    v[i] = bm * (i) + cm;
  }

  for (int i = 0; i < nm; i++) {
    if (v[i] >= nm)

    {
      ans2 = nm - (i);
      break;
    }
  }

  if (bm == 0) {
    if (cm > nm)
      ans2 = 2;
    else
      ans2 = n - 1;
  }
  if (!cm && !bm && nm > 1) {
    ans2 = -1;
  }

  if (ans2 != ans) {
    debug(v);
    debug(nm, bm, cm);
    debug(ans2, ans);
    exit(1);
  }
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();

  int n = 1000000000;
#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--) {
    int nm, bm, cm;

    nm = rand_int(1, 10);
    bm = rand_int(0, 10);
    cm = rand_int(0, 10);
    cin >> nm >> bm >> cm;

    solve(nm, bm, cm);
  }
  return 0;
}
