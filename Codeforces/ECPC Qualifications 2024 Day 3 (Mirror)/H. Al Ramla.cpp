// ﷽
// Contest: ECPC Qualifications 2024 Day 3 (Mirror)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/537870/problem/H
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 07 Oct 2024 01:55:29 PM EEST
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

void solve() {
  string s;
  cin >> s;
  debug(s);
  string s1 = s.substr(0, 2);
  string s2 = s.substr(3);
  int x = stoi(s1);
  int y = stoi(s2);

  if (y&&y / 5 < 10) {
    cout << "0";
  }
  if (y == 0) {
    cout << 12;
  } else
    cout << (y / 5);
  cout << ":";
  if ((x * 5) % 60 < 10) {
    cout << "0";
  }
  // if(x*5<=55){cout<<x*5<<endl;}
  cout << (x * 5) % 60 << endl;
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