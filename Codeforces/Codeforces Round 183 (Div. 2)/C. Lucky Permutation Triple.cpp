// ﷽
// Contest: Codeforces Round 183 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/304/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 23 Sep 2024 07:39:55 PM EEST
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
  int n;
  cin >> n;
  vector<int> a(n);

  iota(all(a), 0);

  vector<int> c;
  debug(a);
  debug(c);
  if(!(n&1))
  {
    cout<<-1;
    return;

  }

  auto is_valid = [&](const vector<int>& a, const vector<int>& b,
                      const vector<int>& c) {
    for (int i = 0; i < n; ++i) {
      if ((a[i] + b[i]) != c[i] % n) {
        return false;
      }
    }
    return true;
  };

  for (int i = 0; i < n; i+=2) {
    c.push_back(i);
  }

  for (int i = 1; i < n; i+=2) {
    c.push_back(i);
  }
  for (auto i : a) {
    
    cout<<i<<" ";
  }
  cout<<"\n";

  for (auto i : a) {
    
    cout<<i<<" ";
  }
  cout<<"\n";

  for (auto i : c) {
    
    cout<<i<<" ";
  }
  cout<<"\n";
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
