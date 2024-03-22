// ﷽
// Contest: Codeforces Round 927 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1932/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 18 Feb 2024 01:03:58 PM UTC
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
  int n, m;
  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; i++) {

    cin >> arr[i];
    // arr[i] %= m;
  }
  int p1 = 0, p2 = n - 1;

  string s;

  cin >> s;
  for (char i : s) {
    if (i == 'L') {
      p1++;
    } else {
      p2--;
    }
  }

  int ans[n];

  // cout <<arr[p1]<<" "<<arr[p2]<<endl;
  if (s[n - 1] == 'L') {
    ans[n - 1] = arr[--p1] % m;
  } else {
    ans[n - 1] = arr[++p2] % m;
  }
  for (int i = n - 2; i + 1; i--) {
    ans[i] = ans[i + 1];
    if (s[i] == 'L') {

      ans[i] = (ans[i] * arr[--p1]) % m;
    } else {

      ans[i] = (ans[i] * arr[++p2]) % m;
    }
  }

  for (int i : ans)
    cout << i << " ";
  cout << "\n";
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
