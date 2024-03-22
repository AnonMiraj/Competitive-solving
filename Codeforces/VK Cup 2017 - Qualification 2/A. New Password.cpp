// ﷽
// Contest: VK Cup 2017 - Qualification 2
// Judge: Codeforces
// URL: https://codeforces.com/contest/770/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 25 Jan 2024 05:12:19 AM UTC
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
  int a,b;
  cin>>a>>b;
  int i=0;
  while (a--) {
    cout<<(char) (i+'a');
    i++;
    i%=b;
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
