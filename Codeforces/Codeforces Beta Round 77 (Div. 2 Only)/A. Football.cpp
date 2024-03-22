// ﷽
// Contest: Codeforces Beta Round 77 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/96/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 07 Mar 2024 08:09:56 PM EET
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
  int cnt =1;
  for (int i=1;i<s.size();i++) {
    if (s[i ]==s[i-1]) {
      cnt++;
    }
    else {
    cnt=1;
    }
    if (cnt ==7) {
      cout<<"YES";
      return;
    
    }

  
  }
  cout<<"NO";

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
