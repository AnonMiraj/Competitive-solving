// ﷽
// Contest: Codeforces Round 316 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/570/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 19 Sep 2024 08:42:00 PM EEST
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
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    
    int ans = 0;
    vector<int> a(n + 2);
    for (int i = 1, cnt = 0; i <= n; i ++) {
        char c;
        cin >> c;
        a[i] = c == '.';
        if (a[i]) {
            cnt ++;
        } else {
            cnt = 0;
        }
        ans += cnt > 1;
    }
    
    while (q --) {
        int i;
        char c;
        cin >> i >> c;
        int v = c == '.';
        if (v != a[i]) {
            if (v) {
                ans ++;
                ans -= (a[i - 1] ^ 1) & (a[i + 1] ^ 1);
                ans += a[i - 1] & a[i + 1];
            } else {
                ans --;
                ans -= a[i - 1] & a[i + 1];
                ans += (a[i - 1] ^ 1) & (a[i + 1] ^ 1);
            }
            a[i] = v;
        }
        cout << ans << '\n';
    }
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}
