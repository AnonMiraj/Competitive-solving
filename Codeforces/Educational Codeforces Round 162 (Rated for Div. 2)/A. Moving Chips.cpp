// ﷽
// Contest: Educational Codeforces Round 162 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1923/problem/0
// Memory Limit: 512
// Time Limit: 2000
// Start: Fri 23 Feb 2024 02:35:46 PM UTC
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
  vector<int> arr(n);
  for (auto &i : arr) {
    cin >> i;
  }
  int firstOneIndex = -1;
  int lastOneIndex = -1;

  for (int i = 0; i < arr.size(); ++i) {
    if (arr[i] == 1) {
      firstOneIndex = i;
      break;
    }
  }
  for (int i = arr.size() - 1; i >= 0; --i) {
    if (arr[i] == 1) {
      lastOneIndex = i;
      break;
    }
  }

  int zerosCount = 0;
  for (int i = firstOneIndex + 1; i < lastOneIndex; ++i) {
    if (arr[i] == 0)
      zerosCount++;
  }
  cout << zerosCount << "\n";
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
