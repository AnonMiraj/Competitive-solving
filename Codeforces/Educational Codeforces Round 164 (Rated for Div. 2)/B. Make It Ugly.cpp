// ﷽
// Contest: Educational Codeforces Round 164 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1954/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 12 Apr 2024 05:02:48 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
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
#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

vector<vector<int>> v;
void subs(int *arr, int n) {
  vector<int> temp;
  for (int i = 0; i < (1 << n); i++) {

    for (int j = 0; j < n; j++) {

      if ((i & (1 << j)) != 0) {
        temp.push_back(arr[j]);
      }
    }
    v.push_back(temp);
  }
}
void solve1(int n, vector<int> arr) {}
void solve() {

  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bool beautful = 1;
  beautful = (arr[0] == arr[n - 1]);
  if (!beautful) {
    cout<<0<<"\n";
    return;
    
  }
  int x = arr[0];
  vector<int> ans;
  ans.push_back(-1);
  for (int i = 1; i < n - 1; i++) {

    if (x != arr[i]) {
      ans.push_back(i);
      if (arr[i] == arr[i - 1]) {
        cout << 0 << "\n";
        return;
      }
    }
  }
  ans.push_back(n);
  int annn = INT_MAX;
  for (size_t i = 1; i < ans.size(); i++) {
    annn = min(ans[i] - ans[i - 1] - 1, annn);
  }
  debug(annn);
  debug(ans);
  if (ans.size() - 2) {
    cout << annn << "\n";
    return;
  }

  cout << -1 << "\n";
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
