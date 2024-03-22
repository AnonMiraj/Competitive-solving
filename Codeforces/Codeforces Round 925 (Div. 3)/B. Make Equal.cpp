// ﷽
// Contest: Codeforces Round 925 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1931/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 13 Feb 2024 07:28:05 PM UTC
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
  int n;
  cin >> n;

  int arr[n];
  int su = 0;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    su += arr[i];
  }
  if (n == 1LL) {
    cout << "YES\n";
    return;
  }
  int carry = 0, num = su / n;
  for (int i = 0; i < n; i++) {
    if (arr[i] > num) {
      carry += arr[i] - num;
      arr[i] = num;
    } else if (arr[i] < num) {
      // carry-=num-arr[i];
      if (carry + arr[i] == num) {
        carry = 0;
      } else if (carry + arr[i] > num) {
        carry -= num - arr[i];

      } else {
        cout << "NO\n";

        return;
      }
    }
  }
  if (!carry) {
    cout << "YES\n";

    return;
  }
  cout << "NO\n";
  // cout<<carry<<endl;
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
