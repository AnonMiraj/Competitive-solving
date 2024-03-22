// ﷽
// Contest: Codeforces Beta Round 65 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/71/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 25 Feb 2024 08:15:26 PM UTC
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
  string s;
  cin>>s;
  if (s.size()<=10) {
  
    cout<<s<<"\n";
    return;
  }
  cout<<s.front()<<s.size()-2<<s.back()<<"\n";
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
