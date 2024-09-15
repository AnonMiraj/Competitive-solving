// ﷽
// Contest: Codeforces Round 970 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2008/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 01 Sep 2024 06:04:05 PM EEST
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
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int I = 0;
  int O = 0;
  for (auto i : s) {
    if (i == '0') {
      O++;
    } else
      I++;
  }
  int sqn=sqrt(n);
  debug(I,O,n,sqn,4*(sqn-2)+4);
  if(s=="1111")
  {
    cout<<"Yes\n";
  }
  else if(sqn*sqn==n&&O==(sqn-2)*(sqn-2))
  {
    cout<<"Yes\n";
  }
  else
    cout<<"No\n";

}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
