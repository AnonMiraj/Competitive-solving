// ﷽
// Contest: Educational Codeforces Round 47 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1009/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 21 Feb 2024 11:07:06 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
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
  cin >> s;
  string s1="",s2="";
  int op=1;
  for (char &i : s)
  {
    if (i=='1') {
      s1+=i;
    }
    else {
      s2+=i;
    }
  }
  for (int i =0 ; i<s2.size() ; i++) {
  
    if (op&&s2[i]=='2') {
      cout<<s1;
      op=0;
    }
    cout<<s2[i];
  }
  if (op) {
  
      cout<<s1;
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
