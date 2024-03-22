// ﷽
// Contest: Codeforces Round 211 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/363/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 20 Feb 2024 03:45:49 PM UTC
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
  int sum = 0;
  int arr[n];
  int ans;
  for (size_t i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < k; i++) {

    sum += arr[i];
  }
  ans = sum;
  int a = 0, p1 = 1, p2 = k ;
  while (p2 != n) {

    sum = sum + arr[p2] - arr[p1-1];
    if (sum < ans) {
      ans = sum;
      a = p1;
    }
    p1++;
    p2++;
  }

  cout << a + 1;
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
