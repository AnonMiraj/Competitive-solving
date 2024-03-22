// ﷽
// Contest: Codeforces Round 173 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/282/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 07 Mar 2024 12:46:51 AM EET
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
  int cnt=0;
  while(n--)
  {
    string s;
    cin>>s;
    if(s[1]=='+')
      ++cnt;
    else
     --cnt;
  }
  cout<<cnt<<endl;}
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
