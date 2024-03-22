// ﷽
// Contest: CodeCraft-22 and Codeforces Round 795 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1691/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 08 Jan 2024 04:16:41 PM UTC
//
// ev + ev =ev
// od+ev=od
// od +od=ev
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
  int ev=0,od=0;
  cin>>n;
  int temp;
  for (size_t i = 0; i < n; i++) {

    cin>>temp;
    if(temp&1)
      od++;
    else
     ev++;
    
  }
   cout<<min(ev,od)<<"\n";
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
