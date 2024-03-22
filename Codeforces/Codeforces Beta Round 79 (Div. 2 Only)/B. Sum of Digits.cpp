// ﷽
// Contest: Codeforces Beta Round 79 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/102/problem/B
// Memory Limit: 265
// Time Limit: 2000
// Start: Mon 04 Mar 2024 03:15:46 AM EET
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
  // 1111
  // 4
  // p
  string n;
  cin>>n;
  int ans=0;
  while (n.size()!=1) {
  int sum=0;
  for (int i= 0 ; i<n.size() ; i++) {
    sum+=n[i]-'0';
  }
  n=to_string(sum);
  ans++;
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
