// ﷽
// Contest: Codeforces Round 928 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1926/problem/C
// Memory Limit: 256
// Time Limit: 500
// Start: Mon 19 Feb 2024 02:59:44 PM UTC
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

vector<int> digit_sum(1000006);
void solve() {
  int n;

  cin >> n;
  cout << digit_sum[n] << "\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  for (int i = 1; i <= 1000005; ++i) {
    int total = 0;
    int x = i;
    while (x > 0) {
      total += x % 10;
      x /= 10;
    }
    digit_sum[i] = total;
    digit_sum[i] += digit_sum[i - 1];
  }

  while (n--)
    solve();
  return 0;
}
