// Contest: Codeforces Round 349 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/667/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 21 Aug 2023 05:50:04 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <climits>
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
  int n;
  int sum=0,ma=INT_MIN;
  cin>>n;
  int arr[n];
  for (auto &i:arr)
    cin>>i;
  for(int i=0;i<n;i++ ){
  sum+=arr[i];
  ma=max(ma,arr[i]);
  }
  cout<<ma-(sum-ma)+1;
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
