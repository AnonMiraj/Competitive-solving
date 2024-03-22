// ﷽
// Contest: CodeCraft-22 and Codeforces Round 795 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1691/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 10 Jan 2024 03:29:32 PM UTC
//
#include <algorithm>
#include <iostream>
#include <vector>
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int n;
  cin>>n;
  vector<int> s(n), p(n);
  

  for (int i = 0; i < n; ++i)
    cin >> s[i];
  int l = 0, r = 0;
  bool ans = true;
  for (int i = 0; i < n; ++i)
    p[i] = i + 1;

  while (r < n) {
    while (r < n - 1 and s[r] == s[r + 1]) // get range [l,r] with equal values
      ++r;
    if (l == r)
      ans = false;
    else
      rotate(p.begin() + l, p.begin() + r,
             p.begin() + r + 1); // rotate right in range [l,r]
    l = r + 1;
    ++r;
  }

  if (ans) {
    for (auto &x : p)
      cout << x << " ";
    cout << endl;
  } else
    cout << -1 << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
