// ﷽
// Contest: Codeforces Round 280 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/492/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 16 Feb 2024 09:02:00 AM UTC
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
  vector<int> arr(n);
  for (auto &i : arr) {
    cin >> i;
  }

  sort(arr.begin(), arr.end());
  double d = 2 * max(arr[0], k - arr[n - 1]);
  for (int i = 0; i < n - 1; i++) {
    d = max(d, (double)(arr[i + 1] - arr[i]));
    // cout<<abs(arr[i]-arr[i-1])/2<<" ";
  }

  cout << fixed << d / 2.;
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
