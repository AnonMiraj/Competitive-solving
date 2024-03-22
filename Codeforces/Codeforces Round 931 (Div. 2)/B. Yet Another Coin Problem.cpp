// ﷽
// Contest: Codeforces Round 931 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1934/problem/b
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 01 Mar 2024 02:45:32 PM UTC
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
vector<int > ahh ={0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 3, 2, 3, 2, 2, 3, 3, 3, 2, 3, 3, 3, 4, 2, 3, 4, 3, 4, 3, 3, 4, 4, 4, 3, 4, 4, 4, 5, 3, 4, 5, 4,
5, 4, 4, 5, 5, 5, 4, 5, 5, 5, 6, 4, 5, 6, 5, 6, 5, 5, 6, 6, 6, 5, 6, 6, 6, 7, 5, 6, 7, 6, 7, 6, 6, 7, 7, 7, 6, 7, 7, 7, 8, 6, 7, 8, 7, 8, 7, 7, 8, 8, 8, 7}
;
int arr[5] = {1, 3, 6, 10, 15};
void solve() {
  int n;
  cin >> n;
  int ans[5] = {};
  int an=0;
  if (n>100) {
    an=n/15;
    n -= 15*an;
  }
  while (n+15<100&&an>0) {
    n+=15;
    an--;
  
  }

  cout << ahh[n]+an << "\n";
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
