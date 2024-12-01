// ﷽
// Contest: Rayan Programming Contest 2024 - Selection (Codeforces Round 989,
// Div. 1 + Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2034/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 30 Nov 2024 06:48:35 PM EET
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
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
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> vv;
  int O = 0;
  int I = 0;
  int T = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    O += v[i] == 0;
    I += v[i] == 1;
    T += v[i] == 2;
  }

  if (is_sorted(all(v))) {
    cout << "0\n";
    return;
  }
  vv = v;
  deque<int> v0;
  deque<int> v1;
  deque<int> v2;
  debug(v);
  for (int i = 0; i < n; i++) {
    if (v[i] == 0 && i >= O)
      v0.push_back(i);
    if (v[i] == 1 && (i < O || i >= O + I))
      v1.push_back(i);

    if (v[i] == 2 && (i < I + O))
      v2.push_back(i);
  }

  debug(v0);
  debug(v1);
  debug(v2);
  debug();
  vector<pair<int, int>> ans;

  if (v1.empty()) {

    v1.push_back(v2.front());
    swap(v[v2.front()], v[O]);
    ans.push_back({v2.front() + 1, O + 1});
    v2.push_back(O);
    v2.pop_front();
  }

  while (!v1.empty()) {

    while (!v1.empty() && !v2.empty() && (v1.front() >= I + O)) {
      ans.push_back({v2.front() + 1, v1.front() + 1});
      swap(v[v2.front()], v[v1.front()]);
      v1.pop_front();
      if ((v2.front() < O || v2.front() >= O + I))
        v1.push_back(v2.front());

      v2.pop_front();
    }

    debug(v);
    debug(v0);
    debug(v1);
    debug(v2);
    while (!v1.empty() && !v0.empty() && (v1.back() < O)) {
      ans.push_back({v1.front() + 1, v0.front() + 1});
      swap(v[v1.front()], v[v0.front()]);
      v1.pop_front();
      if ((v0.front() < O || v0.front() >= O + I))
        v1.push_front(v0.front());

      v0.pop_front();
    }

    debug(v);
    debug(v0);
    debug(v1);
    debug(v2);
    debug();
  }
  debug(v);
  debug(v0);
  debug(v1);
  debug(v2);
  debug();

  for (auto &[a, b] : ans) {
    swap(vv[a - 1], vv[b - 1]);
  }
  if (!is_sorted(all(vv)))
    exit(10);
  cout << ans.size() << "\n";

  for (auto &[a, b] : ans) {
    cout << a << " " << b << "\n";
  }
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--)
    solve();
  return 0;
}
