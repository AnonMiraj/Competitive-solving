// ﷽
// Contest: Codeforces Round 931 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1934/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 01 Mar 2024 02:39:16 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdlib>
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
  vector<int>v(n);
  for (auto &i :v)
    cin>>i;
  sort(v.begin(),v.end());
  int i=v[0],j=v[n-2],k=v[1],l=v[n-1];
  cout<<abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i)<<"\n";

}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
