// ﷽
// Contest: Codeforces Beta Round 71
// Judge: Codeforces
// URL: https://codeforces.com/contest/79/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 26 Feb 2024 08:56:42 AM UTC
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
  int n, m, k, t;
  cin >> n >> m >> k >> t;
  vector<int> s;
  int a, b;
  while (k--) {
    cin >> a >> b;
    a--;
    b--;

    s.push_back(a * m + b);
  }
  sort(s.begin(),s.end());
  int ans;
  int l,i;
  while (t--) {
    cin >> a >> b;
    a--;
    b--;
    l = a * m + b;
    // cout<<l<<" "<<freq[l];

    i=(lower_bound(s.begin(), s.end(), l)-s.begin());
    ans = (l - i ) % 3 + 1;
    if (s[i]==l) {
      ans = 0;
    }

    switch (ans) {
    case 0:
      cout << "Waste\n";
      break;
    case 1:
      cout << "Carrots\n";
      break;
    case 2:
      cout << "Kiwis\n";
      break;
    case 3:
      cout << "Grapes\n";
      break;
    }
  }
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
