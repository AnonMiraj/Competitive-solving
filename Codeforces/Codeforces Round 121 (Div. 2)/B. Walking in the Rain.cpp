// Contest: Codeforces Round 121 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/192/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 21 Aug 2023 05:29:37 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <climits>
#include <vector>
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int n,ans=INT_MAX;
  cin>>n;
  int arr[n];
  for(auto &i:arr)
    cin>>i;
  for (int i=0 ; i<n-1 ; i++) {
    ans=min(ans,arr[i]);
  if(arr[i+1]<arr[i+2])
    i++;
  }
    ans=min(ans,arr[n-1]);
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
