// ﷽
// Contest: Codeforces Round 368 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/707/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 08 Jan 2024 04:11:44 PM UTC
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
  int n,m;
  cin>>n>>m;
  char temp;
  for (int i =0;i<n*m;i++) {
  
    cin>>temp;
    if(temp!='B'&&temp!='W'&&temp!='G')
    {
      cout<<"#Color";
      return;
    }
  }
        cout<<"#Black&White";

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
