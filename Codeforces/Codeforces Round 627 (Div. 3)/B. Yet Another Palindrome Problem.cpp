// ﷽
// Contest: Codeforces Round 627 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1324/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 18 Aug 2024 10:02:56 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

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
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;


void solve() {
  int n;
  cin >> n;
  vector<int> a(n),x;
  for (int i = 0; i < n; i++) {
      cin >> a[i];
  }
  for (int i = 0; i < n-2; i++) {
    if(a[i]==a[i+2])
    {
      cout<<"YES\n";
      return;
    }
  }
  x=a;
  reverse(all(x));
    if(a==x)
    {
      cout<<"YES\n";
      return;
    }
 
  a.erase(unique(all(a)),a.end());
  debug(a);

  map<int,int> m;
  for (auto i : a) {
    m[i]++;
  }
  debug(m);

  for (auto [a,b] : m) {
    if(b>=2)
    {
      cout<<"YES\n";
      return;
    }
  }
      cout<<"NO\n";

}
int32_t main() {

  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
