// ﷽
// Contest: Team Formation 24
// Judge: Codeforces
// URL: https://codeforces.com/group/EhYxAu9AgP/contest/515802/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 11 Apr 2024 07:38:12 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
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
#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
int a;
void dfs(int i){
  if (vis[i]) {
  }

}
void solve() {
  int n, a, b;
  cin >> n;
  adj = vector<vector<int>>(n);
  for (int i = 0; i < n - 1; i++) {
    cin >> a >> b;
    a--;
    b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int ans=0;
  for(int i= 0 ; i<n;i++){
    if (adj[i].size()==1) {
      ans++;
    }
  }
  cout<<ceil(ans/2.f);
  debug(adj);
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
