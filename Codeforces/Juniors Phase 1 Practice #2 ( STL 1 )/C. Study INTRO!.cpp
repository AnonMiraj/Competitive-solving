// ﷽
// Contest: Juniors Phase 1 Practice #2 ( STL 1 )
// Judge: Codeforces
// URL: https://codeforces.com/group/3nQaj5GMG5/contest/373244/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 24 May 2024 02:23:47 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <bits/stdc++.h>

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
  vector<string> v;
  string cur;
  cin >> cur;
  if (cur != "Header") {
    cout << "WA";
    return;
  }

  v.push_back("AS");
  for (int i = 1; i < n - 1; i++) {
    cin >> cur;
    if (("End" + v.back()) == cur) {
      v.pop_back();
      continue;
    }
  if (cur == "Header" || cur == "EndHeader") {
    cout << "WA";
    return;
  }
    v.push_back(cur);
  }
  cin >> cur;
  if (v.back() != "AS" || cur != "EndHeader") {
    cout << "WA";
    return;
  }
  cout << "ACC";
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
