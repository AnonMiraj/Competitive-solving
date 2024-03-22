// ﷽
// Contest: Pinely Round 2 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1863/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 30 Aug 2023 03:23:53 PM UTC
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
  k = k % (n + 1);
  int arr[n + 1];
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  arr[n] = (n * (n + 1) / 2) - sum;
  for (int i = n + 1 - k; i <= n; i++)
    cout << arr[i] << " ";
  for (int i = 0; i < n + 1 - k - 1; i++)
    cout << arr[i] << " ";
  cout << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
