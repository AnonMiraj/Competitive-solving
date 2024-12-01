// ﷽
// Contest: Educational Codeforces Round 171 (Rated for Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2026/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 28 Oct 2024 05:48:58 PM EEST
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

int solve(vector<int>& a) {
  int n = a.size();
  sort(a.begin(), a.end());

  int ans = LLONG_MAX;

  if (n % 2 == 0) {
    do {
      int maxDiff = 0;
      for (int i = 0; i < n; i += 2) {
        maxDiff = max(maxDiff, abs(a[i] - a[i + 1]));
      }
      ans = min(ans, maxDiff);
    } while (next_permutation(a.begin(), a.end()));
  } else {
    for (int extra = 0; extra <= a.back() + 1; extra++) {
      vector<int> temp = a;
      temp.push_back(extra);
      sort(temp.begin(), temp.end());

      do {
        int maxDiff = 0;
        for (int i = 0; i < n + 1; i += 2) {
          maxDiff = max(maxDiff, abs(temp[i] - temp[i + 1]));
        }
        ans = min(ans, maxDiff);
      } while (next_permutation(temp.begin(), temp.end()));
    }
  }

  return ans;
}
int solveb(vector<int>& v) {
  sort(all(v));
  int n = v.size();
  function<bool(int)> can = [&](int k) {
    int howmuch = !(n & 1);
    for (int i = 1; i < n; i++) {
      /*debug(k, v[i] - v[i - 1]);*/
      /*debug(howmuch);*/
      /*debug(v[i]);*/
      if (v[i] - v[i - 1] > k) {
        if (howmuch) return 0;
        howmuch++;
      } else {
        if (howmuch && i == n - 2) return 0;
        i++;
      }
    }

    /*debug(k, "ffs");*/
    return 1;
  };
  int l = 1, r = 1e18;
  while (l < r) {
    /*debug(l, r);*/
    int mid = l + (r - l) / 2LL;
    if (can(mid)) {
      r = mid;

    } else {
      l = mid + 1;
    }
  }
  return l;
}
mt19937 rng = mt19937(random_device()());

void seed(int s) { rng = mt19937(s); }

int rand_int(int x, int y) { return uniform_int_distribution<int>(x, y)(rng); }
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  if (n == 1) return void(cout << "1\n");
  int ma = -1;
  if (!(n & 1)) {
    for (int i = 1; i < n; i += 2) {
      ma = max(ma, v[i] - v[i - 1]);
    }
    cout << ma << "\n";
    return;
  }
  int minMa = INT_MAX;
  for (int i = 0; i < n; ++i) {
    int ma = 0;
    for (int j = 0; j +1 < n; j++) {
      if (j == i) continue;
      
      ma = max(ma, v[j + 1] - v[j]);
      j++;
    }

    minMa = min(minMa, ma);
  }
  cout << minMa << "\n";
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
