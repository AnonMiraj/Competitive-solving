// ﷽
// Contest: Codeforces Round 929 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1933/problem/0
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 27 Feb 2024 02:37:02 PM UTC
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
  int sum=0,s;
  while (n--) {
    cin>>s;
    sum+=abs(s);
  
  }
  cout<<sum<<"\n";
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
