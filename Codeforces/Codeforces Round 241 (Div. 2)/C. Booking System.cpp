// ﷽
// Contest: Codeforces Round 241 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/416/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 27 Aug 2024 05:04:33 PM EEST
// Reading Time : 4
// Thinking Time : 4
// Coding Time :
// Comments : seg tree is what came to mind there is probably better sol
// just read the Constrains i hate myself
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
  vector<pair<pair<int, int>, int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first.first >> a[i].first.second;
    a[i].second = i + 1;
  }
  int m;
  cin >> m;
  vector<pair<int, int>> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b[i].F;
    b[i].S = i + 1;
  }

  int ans = 0;
  vector<pair<int, int>> ans_a;
  sort(all(a));
  sort(all(b));

  vector<int> aa(n);
  for (int i = 0; i < n; i++) {
    aa[i]=a[i].F.F;
    
  }
  debug(a);
  debug(b);
  for (int i = 0; i < m; i++) {
    int ind = upper_bound(all(aa), b[i].F) - aa.begin();
    debug(ind);
    int max_ind = 0;
    int max_i = 0;
    int max_a = 0;

    for (int j = 0; j < ind; j++) {
      if (a[j].F.S > max_a) {
        max_a = a[j].F.S;
        max_i = j;
        max_ind = a[j].S;
      }
    }
    if (max_ind&&max_a>0) {
      debug(max_ind,max_i,max_a);
      ans += max_a;
      ans_a.push_back({ max_ind,b[i].S});
      a[max_i].F.S=-1;
    }
  }
  cout<<ans_a.size()<<" " << ans<<"\n";
  for (auto i : ans_a) {
    cout<<i.F<<" "<<i.S<<"\n";
    
  }
  debug(ans_a,ans);
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
