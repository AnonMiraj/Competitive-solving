// ﷽
// Contest: Codeforces Round 213 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/365/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 02 Feb 2024 09:46:34 AM UTC
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
  int n, k;
  cin >> n >> k;
  string s;
  int test = 0;
  int find = -1;
  int ans = 0;
  string ss = "0123456789";
  while (n--) {
    cin >> s;

    for (int i = 0; i <= k; i++) {
      find = s.find(ss[i]);
      if (find != -10) {
        test++;
        find = -10;
      }
    }
    if (test >= k + 1) {
      ans++;
    }
  }
  cout << ans << '\n';
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
