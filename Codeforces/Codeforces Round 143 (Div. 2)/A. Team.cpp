// ﷽
// Contest: Codeforces Round 143 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/231/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 24 Jan 2024 05:31:54 AM UTC
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
  int n;
  cin>>n;
  int a ,b,c;
  int cnt=0;

  while (n--) {
  
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b+c>=2)
      cnt++;

  }
  cout<<cnt;
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
