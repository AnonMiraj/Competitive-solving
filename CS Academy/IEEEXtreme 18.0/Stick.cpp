// ﷽
// Contest: IEEEXtreme 18.0
//
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/stick/
// Memory Limit: 256
// Time Limit: 500
// Start: Sat 26 Oct 2024 10:21:38 AM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Debug Time :
// Submit Count :
// Problem Level :
// Category :
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

#define MUTLI_CASE
double f(const vector<pair<int,int>>& fig) {
    double res = 0;
    for (unsigned i = 0; i < fig.size(); i++) {
        pair<int,int> p = i ? fig[i - 1] : fig.back();
        pair<int,int> q = fig[i];
        res += (p.first - q.first) * (p.second + q.second);
    }
    return fabs(res) / 2;
}
void solve() {
  int n, k, l;
  cin >> n >> k >> l;
  int y = k + l;
  int x = k - l;
  int d = abs(x - y);
  int area = d * d;

  if (l < k) {
    cout << n*area << endl;
  } else {
  vector<pair<int, int>> arr;
  vector<pair<int, int>> arr1;
  pair<int, int> x1 = {-l, -l};
  pair<int, int> x2 = {-l, l};
  pair<int, int> x3;
  debug(x1);
  debug(x2);
  pair<int, int> prev = x2;

  /*arr.push_back(x1);*/
  for (int i = 1; i < n; i++) {
    x3 = prev;
    x3.F += k;
    arr.push_back(x3);
    debug(x3);
    x3.S += k;
    arr.push_back(x3);
    debug(x3);
    prev = x3;
  }
  for (auto &[a,b] : arr) {
    arr1.push_back({b,a});
  }
  
  arr.push_back({(n-1)*k+l,(n-1)*k+l});
  arr.insert(arr.begin(),{-l,l});
  reverse(all(arr1));
  debug(arr);
  arr1.push_back({l,-l});
  arr1.push_back({-l,-l});
  debug(arr1);
  arr.insert(arr.end(),arr1.begin(),arr1.end());
  debug(arr);
  cout << (int)(f(arr));
  }
  // cout << area << endl;
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  // cin>>n;
#endif
  while (n--) solve();
  return 0;
}
