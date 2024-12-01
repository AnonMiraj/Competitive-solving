// ﷽
// Contest: CSES Problem Set
//
// Judge: CSES
// URL: https://cses.fi/problemset/task/1713
// Memory Limit: 512
// Time Limit: 1000
// Start: Tue 17 Sep 2024 11:19:57 PM EEST
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

#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

    vector<int> divs((1e6+10));
void div(int n = 1e6+10) {

    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j += i) {
            divs[j]++;
        }
    }
}

void solve() {
  int x;
  cin>>x;
  cout<<divs[x]<<"\n";

}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  div();
  int n = 1;
  cin>>n;
  while (n--) solve();
  return 0;
}
