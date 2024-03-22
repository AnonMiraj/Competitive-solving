// ﷽
// Contest: Codeforces Round 933 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1941/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 12 Mar 2024 02:20:47 AM EET
// Reading Time : 1
// Thinking Time : 4
// Coding Time :5
// Comments : nice intuition  this is feels really motivating
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
bool anyNonZero(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] != 0) {
            return true;
        }
    }
    return false;
}
void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (auto &i : arr) {
    cin >> i;
  }
  for (int i = 1; i < n - 1; i++) {

    if (arr[i] < arr[i - 1] * 2||arr[i+1]-arr[i-1]<0) {
      cout << "NO\n";
      return;
    }
    arr[i+1]-=arr[i-1];
    arr[i]-=2*arr[i-1];
    arr[i-1]=0;
    
  }

    if (anyNonZero(arr , n)) {
      cout << "NO\n";
      return;
    }
  cout<<"YES\n";
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
