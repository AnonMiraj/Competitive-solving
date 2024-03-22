// ﷽
// Contest: Codeforces Round 923 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1927/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 06 Feb 2024 03:17:23 PM UTC
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
  int n, m, k;
  cin >> n >> m >> k;
  int a[k + 1] = {};
  int b[k + 1] = {};
  int temp;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp <= k) {
      a[temp]++;
    }
  }
  
  for (int i = 0; i < m; i++) {
    cin >> temp;
    if (temp <= k) {
      b[temp]++;
    }
  }
  //
  // for (int  i = 1; i <=k; i++) {
  //   cout<<a[i]<<" ";
  // }
  //
  // cout<<endl;
  // for (int  i = 1; i <=k; i++) {
  //   cout<<b[i]<<" ";
  // }
  // cout<<endl;
  // cout<<endl;

  int aa=0,bb=0;
  for (int  i = 1; i <=k; i++) {
    if (a[i]&&!b[i]) {
      aa++;
    }
    if (b[i]&&!a[i]) {
      bb++;
    }
    if (!(a[i]||b[i])) {
      cout<<"NO\n";
      return;
    }
  }
  // cout<<aa<<" "<<bb<<endl;
  if (aa>k/2) {
  
      cout<<"NO\n";
      return;
  }
  
  if (bb>k/2) {
  
      cout<<"NO\n";
      return;
  }
      cout<<"YES\n";

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
