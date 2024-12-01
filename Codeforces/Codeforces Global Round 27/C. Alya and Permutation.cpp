// ﷽
// Contest: Codeforces Global Round 27
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2035/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 27 Oct 2024 05:59:38 PM EEST
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

int fk(vector<int> v) {
  int k = 0;
  cerr << "     ";
  for (int i = 0; i < v.size(); i++) {
    if ((i + 1) % 2 == 1) {
      k = k & v[i];
    } else {
      k = k | v[i];
    }

    cerr << k << ", ";
  }
  cerr << "\n";
  return k;
}
#define MUTLI_CASE

// ((x)|z)&n

int f(int n) {
  int m = 31;
  while (m >= 0 && !(n & (1 << m))) {
    m--;
  }
  int x = 1 << m;

  return x;
}

void solve() {
  int n;
  cin >> n;
  int x = f(n & (~1));
  debug(f(8));

  map<int, int> m;
  vector<int> v;

  if (n == 5) {
    cout << "5\n2 1 3 4 5\n";
    return;
  }
  if (n == 6) {
    cout << "7\n1 2 4 6 5 3\n";
    return;
  }

  if (n & 1) {
    v.push_back(n - 4);
    v.push_back(n - 2);
    v.push_back(n - 1);
    v.push_back(n);
  } else {
    v.push_back(x - 5);
    v.push_back(x - 3);
    v.push_back(x - 2);
    v.push_back(x - 1);
    v.push_back(x);
  }
  for (auto i : v) {
    m[i]++;
  }
  vector<int> vs;
  for (int i = 1; i <= n; i++) {
    if (!m[i]) vs.push_back(i);
  }
  v.insert(v.begin(), all(vs));
  cout << fk(v) << "\n";
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
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
