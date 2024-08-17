// ﷽
// Contest: Team Formation 24
// Judge: Codeforces
// URL: https://codeforces.com/group/EhYxAu9AgP/contest/515802/problem/M
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 11 Apr 2024 08:43:43 PM EET
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

void solve() {
  int n;
  cin >> n;
  string s;

  cin >> s;

  int a = n - 1;

  for (int i = 0; i < a; i++) {
    
			if(s[i] == '>' || s[n - 1 - i] == '<')
				a = min(a, i);

  }

  cout<<a<<"\n";
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
