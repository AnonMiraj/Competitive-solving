// ﷽
// Contest: Codeforces Round 165 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/270/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 08 Feb 2024 09:24:18 PM UTC
//
#include <algorithm>
#include <cmath>
#include <iostream>
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

double log_base(double base, double x) {
    return log(x) / log(base);
}
void solve() {
  int n;
  cin>>n;
  int ans=1;
  int a,b;
  for (size_t i = 0; i < n; i++) {
    cin>>a>>b;
    ans=max({ans,(int)(a+ceil(log_base(4,b))),a+1});
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
