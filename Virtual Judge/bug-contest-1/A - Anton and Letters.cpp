// ﷽
// Contest: contest-1
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/609578#problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 12 Feb 2024 05:32:41 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
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
  string s;
  getline(cin,s);
  int cha[30] = {};
  for (int i = 0; i < s.size(); i++) {
    if (!(s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == ',')) {
      cha[s[i] - 'a'] = 1;
    }
  }

  int a = 0;
  for (int i = 0; i < 26; i++) {
    a += cha[i];
  }
  cout  << a;
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
