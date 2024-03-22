// ﷽
// Contest: Educational Codeforces Round 154 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1861/problem/0
// Memory Limit: 512
// Time Limit: 2000
// Start: Thu 31 Aug 2023 02:38:17 PM UTC
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
  if (s.find('3')>s.find('1'))
    cout<<13<<endl;
  else 
    cout <<31<<endl;
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
