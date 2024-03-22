// ﷽
// Contest: Codeforces Round 923 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1927/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 06 Feb 2024 02:52:41 PM UTC
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
  int freq[30]={};
  int arr[n ];
  for (auto &i : arr) {
    cin >> i;
  }
  int  j = 0;
  for (int i = 0; i < n; i++) {
    
    int se =arr[i];

  for (j = 0; j < 26;j++) {
    if (se==freq[j]) {
      cout<<(char) ('a'+j);
      freq[j]++;
      break;
    }
  }
  }
  cout<<endl;
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
