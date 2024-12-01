// ﷽
// Contest: Codeforces Round 980 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2024/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 20 Oct 2024 12:09:58 PM EEST
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

void solve_wa() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  int my = 0;
  int su = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    su += v[i];
  }
  sort(all(v));
  v.push_back(INT_MAX);
  v.push_back(0);

  if (v[0] * n >= k) {
    cout << k << "\n";
    return;
  }
  for (int i = 0; i < n; i++) {
  }
  debug(v);
  int am = n, sure = 0;
  int previ = n + 1;
  for (int i = 0; i < n; i++) {
    debug(v[i], am);
    if (v[i] < v[i + 1]) {
      debug(my, v[i], v[i] - v[previ], am);

      if (my + (v[i] - v[previ]) * (am - sure) >= k) {
        for (int j = i; j < n; j++) {
          debug(k - my, v[j] - v[previ]);

          my += min(v[j] - v[previ], k - my);
          if (my >= k) break;
        }
        break;
      }
      my += (v[i] - v[previ]) * (n - sure);
      sure = i + 1;
      debug(am, i);
      debug(my, sure);
      previ = i;
    }
  }
  // another way
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans += min(v[i], k - ans);
    if (ans >= k) {
      ans += i;
      break;
    }
  }
  debug(ans, my + sure);
  cout << min(my + sure, ans) << "\n";
}
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  vector<int> pref(n + 1);
  int my = 0;
  int su = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    su += v[i];
  }
  v.push_back(0);
  sort(all(v));

  int previ = 0;
  for (int i = 1; i <= n; i++) {

      debug((v[i] - v[previ]), (n - (previ)));
      pref[i] = (v[i] - v[previ]) * (n - (previ));
      previ = i;
  }

  debug(pref);
  for (int i = 1; i <= n; i++) {
    pref[i]+=pref[i-1];
    if(pref[i]>=k)
    {
      cout<<k+i-1<<"\n";
      break;

    }
    
  }
  
  debug(pref);
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
