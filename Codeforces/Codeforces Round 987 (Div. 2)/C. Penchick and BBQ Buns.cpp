// ﷽
// Contest: Codeforces Round 987 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2031/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 15 Nov 2024 02:56:55 PM EET
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

bool p(int n) {
  int r = std::sqrt(n);
  return r * r == n;
}

bool c(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    for (int j = i + 1; j < v.size(); ++j) {
      if (!p(std::abs(v[i] - v[j]))) return false;
    }
  }
  return true;
}
#define MUTLI_CASE
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  /*map<int, vector<int> > m;*/

  if (n & 1 && n < 26) {
    cout << -1 << "\n";
    return;
  }
  int j = 1;
  if (n & 1) {
    if (26 < n) {
      v[0] = j;
      v[16] = j;
      v[25] = j;
      v[26] = j + 1;
      v[17] = j + 1;

      v[24] = j + 2;
      v[15] = j + 2;
      j++;
      j++;
      j++;
    }
    for (int i = 0; i < n;) {
      if (v[i] == 0 && v[i + 1] == 0) {
        v[i] = (j);

        v[i + 1] = (j);
        i++;
        j++;
      }
      i++;
    }
  } else
    for (int i = 0; i < n; j++) {
      v[i] = (j);
      v[i + 1] = (j);
      i += 2;
    }
  for (auto i : v) {
    cout<<i<<" ";
    
    
  }
  cout<<"\n";
  /**/
  /*map<int, vector<int>> m;*/
  /*int ind = 0;*/
  /*for (auto i : v) {*/
  /*  m[i].push_back(ind);*/
  /*  ind++;*/
  /*}*/
  /**/
  /*for (auto& [a, b] : m) {*/
  /*  debug(a, b, c(b));*/
  /*}*/
  /**/
  /*debug(v);*/
  // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
  // 1 2                                   1  2                       1  2
  // if i have three numbers
  // a ,b ,c
  // find values such that
  // a-b = x^2
  // b-c = y^2
  // a-c = z^2
  // in conclusion
  // x^2 + y^2 =z^2
  // this is so cool
  // x = 3
  // y = 4
  // z = 5
  // ai  = 25
  // bi = 16
  // ci = 0
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
