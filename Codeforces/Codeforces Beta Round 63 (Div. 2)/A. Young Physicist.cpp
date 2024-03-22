// ﷽
// Contest: Codeforces Beta Round 63 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/69/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 09 Mar 2024 12:28:52 AM EET
// Reading Time : 1
// Thinking Time : 0
// Coding Time : 3
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
  int x=0,y=0,z=0;
  int temp;
  while (n--) {
  
  cin>>temp;
  x+=temp;
  cin>>temp;
  y+=temp;
  cin>>temp;
  z+=temp;
  }

  if (x||y||z) {
    cout<<"NO";
    return;
  }
  cout<<"YES";
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
