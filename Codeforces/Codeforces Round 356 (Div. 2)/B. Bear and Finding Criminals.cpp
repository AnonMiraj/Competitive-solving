// ﷽
// Contest: Codeforces Round 356 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/680/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 29 Jan 2024 06:16:29 PM UTC
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
  int n, t;
  cin >> n >> t;
  t--;
  int ans = 0;
  int arr[n] = {};
  for (size_t i = 0; i < n; i++) {
    cin >> arr[i];
  }
    for (size_t i = 0; i < n; i++) {
      if (arr[i]) {
       int oc=t-(i-t);
      if (oc<0||oc>n-1||arr[i]==arr[oc]) {
        ans++;
      
      }
     
      }

    }
    cout<<ans;

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
