// ﷽
// Contest: Codeforces Round 197 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/339/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 25 Jan 2024 05:23:59 AM UTC
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
  sort(s.begin(),s.end());
  for (int  i = s.size()/2; i < s.size()-1; i++) {
    cout<<s[i]<<'+';
    
  }
  cout<<s[s.size()-1];
  
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
