// ﷽
// Contest: think-cell Round 1
// Judge: Codeforces
// URL: https://codeforces.com/contest/1930/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 17 Feb 2024 02:36:57 PM UTC
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
  int arr[2LL*n];
  for (auto& i  : arr) {
    cin>>i;
  
  }
  int su=0;
  sort(arr,arr+2LL*n);
  for (int i=2*n-1; i>=0; i-=2) {
    su+=min(arr[i],arr[i-1]);
  
  }
  cout<<su<<'\n';
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
