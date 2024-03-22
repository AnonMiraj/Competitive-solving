// ﷽
// Contest: Codeforces Round 268 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/469/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 29 Jan 2024 05:38:56 PM UTC
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
  cin>>n;
  int arr[n + 1] = {0};
  int x, y;
  cin >> x;
  int temp;
  for (size_t i = 0; i < x; i++) {
    cin >> temp;
    arr[temp] = 1;
  }
  cin >> y;
  for (size_t i = 0; i < y; i++) {
    cin >> temp;
    arr[temp] = 1;
  }
  for (size_t i = 1; i <= n; i++) {
    if(!arr[i])
    {
              cout<<"Oh, my keyboard!";

      return;

    }
  } 
      cout<<"I become the guy.";

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
