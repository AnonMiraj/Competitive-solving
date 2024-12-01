// ﷽
// Contest: Codeforces Round 980 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2024/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 20 Oct 2024 01:37:20 PM EEST
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

int f(vector<int>& A) {
  int cnt = 0;
  for (int i = 0; i < A.size(); i++) {
    cnt += abs((i + 1) - A[i]);
  }
  return cnt / 2;
}

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(2));
  int t, b;
  for (int i = 0; i < n; i++) {
    cin >> t >> b;
    v[i][0] = t;
    v[i][1] = b;
  }

  vector<int> idx(n);
  iota(all(idx), 0);
  int a = INT_MAX;
  do {
    vector<int> tmp;
    vector<int> s;
    for (auto i : idx) {
      tmp.push_back(v[i][0]);
      tmp.push_back(v[i][1]);

      s.push_back(abs(v[i][0] - v[i][1]));
    }
    int k = f(tmp);
    if (k < a) debug();
    if (k <= a) {
      debug(k);
      debug(tmp);
      debug(s);
      a = k;
    }
  } while (next_permutation(idx.begin(), idx.end()));

  debug(v);
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
