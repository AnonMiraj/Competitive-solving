// ﷽
// Contest: SPOJ
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/SPOJ-AGGRCOW#author=ICPC_Mansoura
// Memory Limit: 1536
// Time Limit: 2000
// Start: Mon 05 Feb 2024 08:28:20 PM UTC
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
using namespace std;

void solve() {
  int n, c;
  cin >> n >> c;
  int arr[n];
  for (size_t i = 0; i < n; i++) {
    cin>>arr[i];
    
  }
  sort(arr, arr + n);
  int l = 0, r = arr[n - 1] - arr[0];
  while (l < r) {
    int m = (l + r) / 2;

    int a = 1;

    int temp = arr[0];
    for (int i = 1; i < n; i++) {
      if (temp + m <= arr[i]) {

        temp = arr[i];
        a++;
      }
    }

    if (a >= c) {
      l = m + 1;
    } else {
      r = m;
    }
  }
  cout << l-1 << endl;
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
