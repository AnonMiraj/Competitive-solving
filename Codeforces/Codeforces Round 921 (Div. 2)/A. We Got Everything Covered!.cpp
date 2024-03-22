// ﷽
// Contest: Codeforces Round 921 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1925/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 28 Jan 2024 09:52:24 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <csignal>
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
  int n,k;
  cin>>n>>k;
  for (int i=0 ;i<n*k;i++ ) {
  
    cout<<(char)((i%k)+'a');
  }
  cout<<"\n";
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
