// ﷽
// Contest: Codeforces Round 952 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1985/problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 11 Jun 2024 06:07:32 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long

using namespace std;

int c(int t, vector<pair<int, int>> &v) {
  int td = 0;

  for (auto &[f, s] : v) {
    td += ceil(t / (double)s) * f;
  }
  return td;
}
int solve1(int h, int n, vector<pair<int, int>> &v) {

  int l = 0, r = 0;
  for (auto &[f, s] : v) {
    r = max(r, (h * s) / f);
  }
  int ans = 0;
  while (l < r) {
    ans = c(r, v);
    if (ans >= h) {
      r--;
    } else {
      break;
    }
  }

  return r + 1;
}
int solve2(int h, int n, vector<pair<int, int>> &v) {

  int l = 1, r = 0;
  for (auto &[f, s] : v) {
    r = max(r, (h * s) / f);
  }
  int ans = 0;
  debug(h,n);
  debug(v);
  
  

  r*=10;
  while (l < r) {

    int t = (l + r) / 2;

    ans = c(t, v);
    debug(ans);
    if (ans >= h) {
      r = t;
    } else {
      l = t + 1;
    }
  }

  return l;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)

  {
    int h, n;
    cin >> h >> n;
    vector<pair<int, int>> v(n);
    for (auto &[f, s] : v)
      cin >> f;
    for (auto &[f, s] : v) {
      cin >> s;
    }
    cout << solve2(h, n, v) << "\n";
  }
  int as=0;

    srand(time(0));
  while (0) {
    int h = rand() % (2 * 10) + 1;
    int n = rand() % (2 * 10) + 1;
    debug(h,n);

    vector<pair<int, int>> v(n);

    for (auto &[f, s] : v) {

      f = rand() % (2 * 10) + 1;
      s = rand() % (2 * 10) + 1;
    }
    int a = solve1(h, n, v);
    int b = solve2(h, n, v);
    if (a != b) {

      cout << h << " " << n << endl;
      debug(a, b);
      cout << h << " " << n << endl;
      for (int i = 0; i < n; ++i) {
        if (i != 0)
          cout << " ";
        cout << v[i].first;
      }
      cout << endl;

      for (int i = 0; i < n; ++i) {
        if (i != 0)
          cout << " ";
        cout << v[i].second;
      }

      return 1;
    }
  }

  return 0;
}
