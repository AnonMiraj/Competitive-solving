// ﷽
// Contest: Codeforces Beta Round 94 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/129/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 22 Feb 2024 06:56:53 PM UTC
//
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> adj[n + 1];
  int cnt[101] = {};
  int a, b;

  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    adj[a - 1].push_back(b - 1);
    cnt[a - 1]++;
    cnt[b - 1]++;
    adj[b - 1].push_back(a - 1);
  }
  int ans = 0;
  int op = 1;
  queue<int> ptrQueue;

  while (op) {

    op = 0;
    vector<int> tmp;
    for (int i = 0; i < n; i++) {
      if (cnt[i] == 1) {

        cnt[i]--;
        tmp.push_back(i);
        op = 1;
      }
    }
    for (auto &p : tmp) {
      for (auto &s : adj[p]) {
        cnt[s]--;
      }
    }

    ans += op;
  }

  cout << ans;
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
