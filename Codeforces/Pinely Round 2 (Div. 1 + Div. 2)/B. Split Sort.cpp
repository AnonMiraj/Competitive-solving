// ﷽
// Contest: Pinely Round 2 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1863/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 30 Aug 2023 03:07:26 PM UTC
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

int countAscendingInSecondPart(const std::vector<std::pair<int, int>> &pairs) {
  int count = 0;
  for (int i = 1; i < pairs.size(); i++)
    if (pairs[i].second > pairs[i - 1].second) {
      count++;
    }
  return count;
}
void solve() {
  int n;
  cin>>n;
  vector<pair<int, int>> v;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back({x, i});
  }

  sort(v.begin(), v.end());
  cout <<n-1- countAscendingInSecondPart(v) << endl;
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
