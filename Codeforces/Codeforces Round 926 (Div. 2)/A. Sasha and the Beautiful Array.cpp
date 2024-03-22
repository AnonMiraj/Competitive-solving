// ﷽
// Contest: Codeforces Round 926 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1929/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 15 Feb 2024 02:35:59 PM UTC
//
#include <algorithm>
#include <atomic>
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
  int n,ans=0;
  cin>>n;
  int arr[n];
  for (auto &i  : arr) {
    cin>>i;
  }
  sort(arr,arr+n);
  for (int i=1;i<n;i++) {
    ans+=arr[i]-arr[i-1];
  
  }
  cout<<ans<<'\n';
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
