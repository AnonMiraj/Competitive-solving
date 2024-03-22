// ﷽
// Contest: Codeforces Round 686 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1454/D
// Memory Limit: 256
// Time Limit: 3000
// Start: Sun 03 Sep 2023 11:41:46 AM UTC
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
  vector<pair<int, long long>> val;
  for (long long i = 2; i * i <= n; ++i) {
    int cnt = 0;
    while (n % i == 0) {
      ++cnt;
      n /= i;
    }
    if (cnt > 0) {
      val.push_back({cnt, i});
    }
  }
  if (n > 1) {
    val.push_back({1, n});
  }

  sort(val.rbegin(), val.rend());
  vector<int> ans;
  for (int i = 0; i < val[0].first; i++)
    ans.push_back(val[0].second);
  for (int i = 1; i < val.size(); ++i) {
    for (int j = 0; j < val[i].first; ++j) {
      ans[val[0].first - 1] *= val[i].second;
    }
  }
  cout << ans.size() << endl;
  for (auto it : ans)
    cout << it << " ";
  cout << endl;
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
