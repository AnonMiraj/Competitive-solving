// ﷽
// Contest: Codeforces Round 975 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2019/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 27 Sep 2024 05:10:48 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <bits/stdc++.h>

#ifdef ALGOAT
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
  int ans=-1;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
      cin >> v[i];

      ans=max(ans,v[i]+(n+!(i&1))/2);
  }

  cout<<ans<<"\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin>>n;
  while (n--) solve();
  return 0;
}
