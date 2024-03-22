// ﷽
// Contest: Codeforces Round 149 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/242/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 26 Feb 2024 08:11:50 AM UTC
//
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int x, y, k, l;
  cin >> x >> y >> k >> l;
  int n;
  map<pair<int, int>, bool> board;
  cin >> n;
  while (n--) {
    int r, a, b;
    cin >> r >> a >> b;
    for (int i = a; i <= b; i++)
      board[{r, i}] = true;
  }
  int ans = -1;
  queue<pair<pair<int, int>, int>> q;
  q.push({{x, y}, 0});
  while (!q.empty()) {

    pair<int, int> p = q.front().first;
    int lev = q.front().second;
    q.pop();
    if (!board[p])
      continue;
    board[p] = 0;
    if (p.first == k && p.second == l) {
      ans = lev;
      break;
    }
    q.push({{p.first, p.second + 1}, lev + 1});
    q.push({{p.first, p.second - 1}, lev + 1});

    q.push({{p.first + 1, p.second}, lev + 1});
    q.push({{p.first + 1, p.second + 1}, lev + 1});
    q.push({{p.first + 1, p.second - 1}, lev + 1});

    q.push({{p.first - 1, p.second}, lev + 1});
    q.push({{p.first - 1, p.second + 1}, lev + 1});
    q.push({{p.first - 1, p.second - 1}, lev + 1});
  }
  cout << ans;
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
