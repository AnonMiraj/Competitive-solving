// ﷽
// Contest: VK Cup 2012 Qualification Round 1
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/158/A
// Memory Limit: 256
// Time Limit: 3000
// Start: Mon 04 Mar 2024 11:26:43 PM EET
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
  int n,a,ans=0;
  cin>>n>>a;
int temp,arr[n];

  for (int i=0 ; i<n ; i++) {
    cin>>arr[i];
  
  }

  for (int i=0 ; i<n ; i++) {
    if (arr[a-1]<=arr[i]&&arr[i]) {
      ans++;
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
