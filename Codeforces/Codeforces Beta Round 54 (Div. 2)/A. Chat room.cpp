// ﷽
// Contest: Codeforces Beta Round 54 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/58/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 09 Mar 2024 12:38:11 AM EET
// Reading Time : .5
// Thinking Time : 
// Coding Time : 2 + 2
// Comments : WA first missed a test case  it was because i dont know how to count 2 WA i misstype o as s bruh
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
  string s, o="hello";
  cin>>s;
  int ind =0;
  for(auto &c :s) {
    if (c==o[ind]) {
      ind++;
    }

    if (ind==5) {
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
