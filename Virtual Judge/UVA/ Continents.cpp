// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-11094
// Memory Limit: 1024
// Time Limit: 3000
// Start: Tue 23 Apr 2024 07:40:42 AM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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
char mapp[22][22];

int n, m;
char land;
int dfs(int x, int y) {
  if (mapp[x][y] != land||x==-1||x==m) {
    return 0;
  }
  mapp[x][y] = '0';
  return dfs(x + 1, y) + dfs(x, (y + 1) % n) + dfs(x-1, y) +
         dfs(x, (y - 1 + n) % n)+1;
}

void solve() {
  int x, y;
  while (cin >> m >> n) {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> mapp[i][j];
      }
    }
    cin >> x >> y;

    int ans = 0;
    land = mapp[x][y];
    debug(x, y);
    dfs(x, y);

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (mapp[i][j] == land) {
          ans = max(dfs(i, j), ans);
        }
      }
    }

    cout << ans << endl;
    for (int i = 0; i < m; i++) {
      debug_itr(mapp[i], mapp[i] + n);
    }
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
