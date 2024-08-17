// ﷽
// Contest: Codeforces Round 952 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1985/problem/E
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 11 Jun 2024 05:57:11 PM EEST
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
  int k;
  int x,y,z;
  cin >> x >> y >> z >> k;
  int n = k;

    vector<int> d;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            d.push_back(i);
            if (i != n / i) {
                d.push_back(n / i);
            }
        }
    }
    int ans=0;
        for(int xm:d){
            for(int ym:d){
                int zm = k/xm/ym;
                if(k != xm*ym*zm)continue;
                if(xm > x || ym>y || zm>z)continue;
                ans = max(ans , (x-xm+1)*(y-ym+1)*(z-zm+1));
            }
        }
  cout << ans
       << "\n";
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
