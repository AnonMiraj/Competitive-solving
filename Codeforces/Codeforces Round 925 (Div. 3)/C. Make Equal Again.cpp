// ﷽
// Contest: Codeforces Round 925 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1931/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 13 Feb 2024 07:55:57 PM UTC
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

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int ans = n - 1, p1 = 0, p2 =n-1 ;
  while (arr[p1] == arr[p1 + 1]&&p1!=n) {
    p1++;
  }
  while (arr[p2-1] == arr[p2 ]&&(p2)) {
    p2--;
  }

  // cout <<  p1<<" "<<p2 << "\n";

  // return;
  if (arr[p1] == arr[p2] && p2) {
    cout << p2-p1-1 << "\n";
    return;
  }
  else if (!p2) {

    cout << 0 << "\n";

    return;
  } 

  if (arr[p1] != arr[p2]) {
    cout<<min(n-(p1+1),p2)<<"\n";
    return;
  }

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
