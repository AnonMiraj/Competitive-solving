// ﷽
// Contest: contest-1
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/609578#problem/E
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 12 Feb 2024 06:17:24 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdlib>
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

  int n, m, k;
  cin >> n >> m >> k;
  int arr[m + 1];
  for (int i = 0; i <= m; i++) {
    cin >> arr[i];

  }

  int ans = 0;
  for (int i = 0; i < m; i++) {

    if (__builtin_popcount(arr[m] ^ arr[i])<= k) {
      ans++;
    }
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
