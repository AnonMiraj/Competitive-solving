// ﷽
// Contest: Codeforces Round 909 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1899/E
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 02 Jan 2024 05:41:00 PM UTC
//
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
  int minn = 0;
  for (size_t i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[minn] > arr[i])
      minn = i;
  }
  if(!is_sorted(arr+minn,arr+n)){
    cout<<-1<<endl;
    return;

  }
  cout << minn << endl;
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
