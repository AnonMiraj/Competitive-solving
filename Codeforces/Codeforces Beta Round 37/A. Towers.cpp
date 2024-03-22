// ﷽
// Contest: Codeforces Beta Round 37
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/37/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 31 Dec 2023 08:33:10 PM UTC
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
  int arr[1001]={};
  int temp;
  for (size_t i = 0; i < n; i++) {
    cin>>temp;
    arr[temp]++;
  }
  int cnt=0;
  int ans=0;

  for (size_t i = 0; i < 1001; i++) {
    if (arr[i]) {
    cnt++;
    ans=max(ans,arr[i]);
    }
  }
    cout <<ans<<" "<<cnt;


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
