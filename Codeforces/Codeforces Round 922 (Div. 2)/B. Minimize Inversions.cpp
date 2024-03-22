// ﷽
// Contest: Codeforces Round 922 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1918/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 30 Jan 2024 02:37:48 PM UTC
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
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (auto &i : v) {
    cin >> i.first;
  }
  for (auto &i : v) {
    cin >> i.second;
  }
  sort(v.begin(), v.end());
  
  for (auto &i : v) {
    cout<< i.first<<" ";
  }
  cout<<'\n';
  for (auto &i : v) {
    cout<< i.second<<" ";
  }
  cout<<'\n';
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
