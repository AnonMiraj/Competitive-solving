// ﷽
// Contest: Codeforces Round 371 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/714/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 28 Feb 2024 08:18:35 PM UTC
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
  set<int> s;
  int n;
  cin >> n;
  int a;

  while (n--) {
    cin >> a;
    s.insert(a);
  }
  if (s.size() <= 2) {
    cout << "YES";
    return;
  }
  if (s.size() == 3) {
    auto it = s.begin();
    int a = *it;
    it++;
    int b = *it;
    it++;
    int c = *it;
    if (a - b == b - c) {
      cout << "YES";
      return;
    }
  }
  cout << "NO";
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
