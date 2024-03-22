// ﷽
// Contest: Codeforces Beta Round 89 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/118/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 30 Dec 2023 09:38:52 PM UTC
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
  map<char, bool>vow;
  vow['a']=true;
  vow['o']=true;
  vow['y']=true;
  vow['u']=true;
  vow['e']=true;
  vow['i']=true;
  string s;
  cin>>s;
  for (size_t i = 0; i < s.size(); i++) {
    if (vow[s[i]]||vow[tolower(s[i])]) {
    
      continue;
    }
    cout<<'.'<<(char)tolower(s[i]);
    
  }



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
