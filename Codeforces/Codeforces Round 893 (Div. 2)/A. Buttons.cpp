// Problem: A. Buttons
// Contest: Codeforces Round 893 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1858/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 15 Aug 2023 02:35:53 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
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
  int a, b, c;
  cin >> a >> b >> c;
  a += ceil((double)  c/ 2);
  b += c / 2;
  if (a > b)
    cout << "First\n";
  else
    cout << "Second\n";
    // cout <<a<<" "<<b<<" "<<c <<endl;
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
