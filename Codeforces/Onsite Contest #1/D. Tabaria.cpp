// ﷽
// Contest: Onsite Contest #1
// Judge: Codeforces
// URL: https://codeforces.com/group/nxj8A6N6aG/contest/508414/problem/D
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 13 Mar 2024 05:11:23 AM EET
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
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
  if (n==2||n==3) {
    cout<<"second\n";
  
    return;
  }
    cout<<"first\n";
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