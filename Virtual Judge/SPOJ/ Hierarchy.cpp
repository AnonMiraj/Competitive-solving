// ﷽
// Contest: SPOJ
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/SPOJ-MAKETREE
// Memory Limit: 1536
// Time Limit: 1000
// Start: Mon 29 Jan 2024 05:17:03 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <ostream>
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
  cin >> n >> k;
  int a, b;
  graph = vector<vector<int>>(n);
  vis = vector<int>(n);

  for (int i = 0; i < k; i++) {

    cin >> a;

    for (int j = 0; j < a; j++) {
      cin >> b;
      graph[i].push_back(b - 1);
    }
  }
  // for (int i = 0; i < k; i++) {
  //   cout << i << " ";
  //
  //   for (int j = 0; j < graph[i].size(); j++) {
  //     cout << graph[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  topological_sort();
  // for (auto &i  : ans) {
  //   cout<<i<<'\n';
  // }
  int arr[n+1]={};
  for (int i=2  ;i<=n;i++) {
    arr[ans[i-1]]=ans[i-2];
  }
    for (int i=1  ;i<=n;i++) {
      cout<<arr[i]<<"\n";
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
