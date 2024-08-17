// ﷽
// Contest: Codeforces Round 963 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1993/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 04 Aug 2024 07:27:53 PM EEST
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
 
using namespace std;
void solve() {

    int n;
    cin >> n;
    vector<int> a(n);
    int o = 0;
    int e = 0;


    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i : a) {
        if (i&1 ) {
            e++;
        } else {
            o++;
        }
    }
    cout<<min(e,o)<<endl;
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
