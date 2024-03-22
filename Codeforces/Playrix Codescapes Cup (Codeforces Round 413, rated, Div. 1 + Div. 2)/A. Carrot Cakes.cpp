// ﷽
// Contest: Playrix Codescapes Cup (Codeforces Round 413, rated, Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/799/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 23 Dec 2023 10:31:59 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <climits>
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
  int n,t,k,d;
  cin>>n>>t>>k>>d;
    int currt = 0;
 
    while (currt <= d) {
        n -= k;
        currt += t;
    }
 
    if (n > 0) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }}
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
