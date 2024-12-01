// ﷽
// Contest: Codeforces Round 984 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2036/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 02 Nov 2024 05:29:46 PM EET
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

int c(string s) {
  int is_there = 0;
  for (int i = 0; i < s.size() - 3; i++) {
    if (s.substr(i, 4) == "1543") is_there++;
  }
  return is_there;
}
string f(vector<string> v, int l, int n, int m) {
  int sr = l, sc = l;
  int er = n - l - 1;
  int ec = m - l - 1;
  string s;

  for (int j = sc; j <= ec; ++j) {
    s += v[sr][j];
  }

  for (int i = sr + 1; i <= er; ++i) {
    s += v[i][ec];
  }

  if (er > sr) {
    for (int j = ec - 1; j >= sc; --j) {
      s += v[er][j];
    }
  }

  if (ec > sc) {
    for (int i = er - 1; i > sr; --i) {
      s += v[i][sc];
    }
  }
  return s;
}
void solve() {
  int n, m;
  cin >> n >> m;

  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int layers = min(n, m) / 2;

  string s;
  debug(v);
  int ans = 0;
  for (int i = 0; i < layers; ++i) {
    s = f(v, i, n, m);
    int pos = s.find('1');
    if (pos == string::npos) pos = 0;
    rotate(s.begin(), s.begin() + pos, s.end());
    ans+=c(s);
    debug(s);
  }
  cout<<ans<<"\n";
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
