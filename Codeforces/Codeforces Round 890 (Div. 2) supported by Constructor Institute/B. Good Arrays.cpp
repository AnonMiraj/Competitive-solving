// ﷽
// Contest: Codeforces Round 890 (Div. 2) supported by Constructor Institute
// Judge: Codeforces
// URL: https://codeforces.com/contest/1856/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 24 Feb 2024 06:10:56 PM UTC
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
  int n, tme = 0;
  cin >> n;

  int su = 0, on = 0;
  for (int i = 0; i < n; i++) {
    cin >> tme;
    if (tme == 1) {
      on++;
      // continue;
    }

    su += tme;
  }
  if (su-n+1 > on && n != 1) {
    // cout<<su<<" "  <<on<<endl;
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
  // cout << su - n + 1;
  // for (int i = 1; i < n; i++) {
  //   cout << " " << 1;
  // }
  // cout<<"\n";
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
