// ﷽
// Contest: Codeforces Round 932 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1935/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 05 Mar 2024 05:01:45 PM EET
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
  int aa[n];
  int temp = 0;
  for (int i = 0; i < n; i++) {
    cin >> aa[i];
  }
  vector<int> cnt(n);
  int pref[n] , suff[n] ;
  for (int i = 1; i < n; i++) {
    cnt[aa[i - 1]]++;
    while (cnt[temp]) {
      temp++;
    }
    pref[i] = temp;
  }
  temp = 0;
  cnt.assign(n,0);
  for (int i = n - 1; i >= 1; i--) {
    cnt[aa[i]]++;
    while (cnt[temp]) {
      temp++;
    }
    suff[i] = temp;
  }
  // for (int i = 1; i < n; i++) {
  //   cout << pref[i] << " ";
  // }
  // cout << endl;
  // for (int i = 1; i < n; i++) {
  //   cout << suff[i] << " ";
  // }
  // cout << endl;
  int i = 0;
  for (i = 1; i < n; i++) {
    if (pref[i] == suff[i]) {
      cout << 2 << "\n";
      cout << 1 << " " << i + 1 << "\n";
      cout << i + 2 << " " << n << "\n";
      return;
    }
  }
  cout << -1 << '\n';
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
