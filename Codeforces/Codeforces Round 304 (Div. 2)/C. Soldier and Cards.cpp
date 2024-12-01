// ﷽
// Contest: Codeforces Round 304 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/546/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 26 Sep 2024 03:01:13 AM EEST
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

  deque<int> q1;
  deque<int> q2;
  int t, x;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> x;
    q1.push_back(x);
  }
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> x;
    q2.push_back(x);
  }
  debug(q1);
  debug(q2);
  int ans = 0;
  while (!q1.empty() && !q2.empty()) {
    if (q1.front() > q2.front()) {
      q1.push_back(q2.front());
      q1.push_back(q1.front());
      q1.pop_front();
      q2.pop_front();
    } else {
      q2.push_back(q1.front());
      q2.push_back(q2.front());
      q2.pop_front();
      q1.pop_front();
    }
    ans++;
    if(ans>100000)
    {
      cout<<-1;
      return;
    }
  }
  cout<<ans<<" "<<(q1.empty()? "2":"1");
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
