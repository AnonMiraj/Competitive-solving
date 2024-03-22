// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-10305#author=0
// Memory Limit: 1024
// Time Limit: 3000
// Start: Fri 09 Feb 2024 02:28:10 PM UTC
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

int n, k;
vector<vector<int>> graph;
vector<int> vis;
vector<int> ans;
void dfs(int v) {
  vis[v] = true;
  for (int u : graph[v]) {
    if (!vis[u])
      dfs(u);
  }
  ans.push_back(v+1);
}

void topological_sort() {
  vis.assign(n, false);
  ans.clear();
  for (int i = 0; i < n; ++i) {
    if (!vis[i]) {
      dfs(i);
    }
  }
  reverse(ans.begin(), ans.end());
}
void solve() {
  int a,b;
  while (cin>>n>>k&&n) {
  
  graph = vector<vector<int>>(n);
  vis = vector<int>(n);

  for (int i = 0; i < k; i++) {

    cin >> a>>b;

      graph[a-1].push_back(b-1);
  }
    topological_sort();
  for (auto &i  : ans) {
    cout<<i<<" ";
  }
    cout<<'\n';

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
