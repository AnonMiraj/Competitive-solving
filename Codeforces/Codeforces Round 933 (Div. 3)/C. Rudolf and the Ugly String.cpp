// ﷽
// Contest: Codeforces Round 933 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1941/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 12 Mar 2024 02:32:12 AM EET
// Reading Time : 1
// Thinking Time : 3
// Coding Time : 20 + 9 + 5
// Comments : WA1 little silly mistake i didnt read the statement well WA2 idk
// what is wrong for real for real now  i know i just copy pasted without
// editing appropriately silly me i am little fool well whatever
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
  pair<char, int> arr[n];
  char te;
  int siz = 1;
  cin >> te;
  arr[0].first = te;
  arr[0].second = 1;
  for (int i = 1; i < n; i++) {
    cin >> te;
    if (te == arr[siz - 1].first) {
      arr[siz - 1].second++;
      continue;
    }
    arr[siz++] = make_pair(te, 1);
  }
  if (n <= 2) {
    cout << 0 << '\n';
    return;
  }
  int ans = 0;
  int add;
  for (int i = 0; i < siz - 2; i++) {
    string three = "";
    three.push_back(arr[i].first);
    three.push_back(arr[i + 1].first);
    three.push_back(arr[i + 2].first);

    if (three == "map" && arr[i + 1].second == 1) {
      add = min({arr[i].second,  1LL, arr[i + 2].second});
      ans += add;
      if (arr[i + 2].second == add) {
        arr[i + 2].second = 0;
      }
    }
    if (three == "pie" && arr[i + 1].second == 1) {
      ans += min({arr[i].second, 1LL, arr[i + 2].second});
    }
  }
  cout << ans << "\n";
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
