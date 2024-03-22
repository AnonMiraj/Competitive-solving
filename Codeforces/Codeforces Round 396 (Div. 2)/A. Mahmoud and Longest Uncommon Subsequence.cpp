// ﷽
// Contest: Codeforces Round 396 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/766/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 26 Jan 2024 05:27:14 AM UTC
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
  string a,b;
  cin>>a>>b;
  if (a==b) {
    cout<<-1;
    return;
  
  }
  cout<<max(a.size(),b.size());
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
