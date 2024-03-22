// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-412#author=0
// Memory Limit: 1024
// Time Limit: 3000
// Start: Wed 14 Feb 2024 04:44:52 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
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
  while (cin >> n && n) {
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    double p = (n * (n - 1)) / 2., g = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i+1; j < n; j++) {
        if (__gcd(arr[i], arr[j]) == 1) {
          g++;
        }
      }
    }
    if (g) {
    
    cout <<fixed<<setprecision(6)<< sqrt((6.f*p)/g) << '\n';
    }
    else {
    
      cout<<"No estimate for this data set.\n";
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
