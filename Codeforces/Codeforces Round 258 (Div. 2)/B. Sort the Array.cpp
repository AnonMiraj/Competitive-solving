// ﷽
// Contest: Codeforces Round 258 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/451/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 20 Feb 2024 05:10:35 PM UTC
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

bool isSorted(int arr[], int size) {
  for (int i = 0; i < size - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      return false;
    }
  }
  return true;
}
void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int p1 = 0, p2 = 0;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {

      p1 = i;
      p2 = i;
      while (p2 + 1 < n && arr[p2] > arr[p2 + 1]) {
        p2++;
      }
      break;
    }
  }

  reverse(arr + p1, arr + p2 + 1);
  // for (int i= 0 ; i<n ; i++) {
  //   cout<<arr[i]<<" ";
  //
  // }
  // cout<<endl;
  if (is_sorted(arr, arr + n)) {
    cout << "yes\n";
    cout << p1 + 1 << " " << p2 + 1;
  } else {
    cout << "no";
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
