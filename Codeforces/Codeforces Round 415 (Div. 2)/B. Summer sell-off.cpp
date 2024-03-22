// ﷽
// Contest: Codeforces Round 415 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/810/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 20 Feb 2024 05:32:01 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <functional>
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
  int n, k;
  cin >> n >> k;
  pair<int, int> ar[n];
  priority_queue<int >q;

  for (int i = 0; i < n; i++) {
    cin >> ar[i].first;
    cin >> ar[i].second;
  }
  // sort(ar, ar + n,greater<>());
  int ans=0;
  for (int i = 0; i < n; i++) {
    // cin >> ar[i].first >> ar[i].second;
    // cout << ar[i].first << " " << ar[i].second << "\n";

    q.push(min(ar[i].first*2,ar[i].second)-min(ar[i].first,ar[i].second));
    ans+=min(ar[i].first,ar[i].second);
  }
  while (k--) {
  
    ans+=q.top();
      q.pop();
  }
  cout<<ans;
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
