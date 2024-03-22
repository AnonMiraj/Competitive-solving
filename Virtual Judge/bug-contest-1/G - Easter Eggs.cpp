// ﷽
// Contest: contest-1
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/609578#problem/G
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 12 Feb 2024 07:01:12 PM UTC
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
  int x;
  cin>>x;
  int n=7+x;
  string s="ROYGBIV",ans="";
  while (max(0LL,n-=7)) {
    ans+=s;
  }
  ans+=s;
  if (ans[0]==ans[x-1]) {
    swap(ans[x-1],ans[x+3]);
  }
  cout<<ans.substr(0,x);


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
