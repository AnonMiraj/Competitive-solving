// ﷽
// Contest: Codeforces Round 928 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1926/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 20 Feb 2024 03:16:23 PM UTC
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

 int64_t a = 2147483647;
void solve() {
  int n;
  cin >> n;
  int64_t arr[n];
  for (int64_t &i : arr) {
    cin >> i;
  }
  sort(arr, arr + n);
  // for (int64_t &i : arr) {
  //   // cout<< i<<" ";
  // }
  int64_t p1, p2 = n - 1, ans = 0;
  for (p1=0 ; p1<=p2 ; p1++) {
  
    if (arr[p1]+arr[p2]==a) {
    
      p2--;
    }
    else if (arr[p1]+arr[p2]>a) {
      p2--;
      p1--;
      ans++;
    
    }


  }
      cout << p1+ans << "\n";
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
