// ﷽
// Contest: QCPC 2024 (Mirror)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/551747/problem/K
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 14 Oct 2024 11:07:45 AM EEST
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

vector<vector<int>> dv((int)(100000));
void divs(int n) {
  for (int i = 1; i < n; i++) {
    for (int j = i; j < n; j += i) {
      dv[j].push_back(i);
    }
  }
}

map<int, int> m;
bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}
void solve() {
  int d;
  cin >> d;
  if(isPrime(d))
  {
    cout<<d<<"\n";
    return;

  }
  int ans=m[d];
  cout<<(ans? ans:-1)<<"\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  divs(1e5);

  for (int i = 1; i < 1e5; i++) {
    int t = 1;

    for (auto j : dv[i]) {
      t *= j;
      if(t>=1e9)
      {
        t=-1;
        break;
      }

    }
    m[t]=i;
  }

  debug(m);
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
