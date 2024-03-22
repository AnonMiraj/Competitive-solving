// ﷽
// Contest: Codeforces Beta Round 44 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/47/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 04 Mar 2024 03:26:21 AM EET
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
  // a>b
  // b>c
  // a>c
  int a = 0, b = 1, c = 2;
  int arr[4] = {};
  string s[3];
  cin >> s[0];
  cin >> s[1];
  cin >> s[2];
  for (int i = 0; i < 3; i++) {

    if (s[i][1] == '>') {

      switch (s[i][0]) {
      case 'A':
        arr[0]++;
        break;
      case 'B':
        arr[1]++;
        break;
      case 'C':
        arr[2]++;
        break;
      }

    } else {

      switch (s[i][2]) {
      case 'A':
        arr[0]++;
        break;
      case 'B':
        arr[1]++;
        break;
      case 'C':
        arr[2]++;
        break;
      }
    }
  }

  string q="123";
  for (int i = 0; i < 3; i++) {

    switch (arr[i]) {
    case 0:
      q[0] = i + 'A';
      break;
    case 1:
      q[1] = i + 'A';
      break;
    case 2:
      q[2] = i + 'A';
      break;
    default:
      q = "0";
    }
  }
  
  string bruh=q;
  sort(q.begin(),q.end());
  if (q.size()!=3||q!="ABC") {
    cout << "Impossible" << endl;
  
    return;
  }

  cout<<bruh;
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
