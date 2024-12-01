
#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};

using namespace std;
vector<vector<int>> adj;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> arr(n); 
  for (auto &it : arr) cin >> it;

  adj = vector<vector<int>>(n + 1);
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  priority_queue<int, vector<int>, greater<int>> pq;
  vector<bool> visited(n + 1, false);

  pq.push(1);
  visited[1] = true;

  while (!pq.empty()) {
    int curr = pq.top();
    pq.pop();
    cout << curr << " ";

    for (int neighbor : adj[curr]) {
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        pq.push(neighbor);
      }
    }
  }
  cout << endl;
}

int32_t main() {
  fastio();
  int t = 1;

  #ifdef MUTLI_CASE
  cin >> t;
  #endif
  
  while (t--) solve();
  return 0;
}
