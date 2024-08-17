
// ﷽
// Contest: Codeforces Round 799 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1692/problem/F
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 11 May 2024 11:46:42 PM EEST
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

using namespace std;

  vector<int> a(10, 0);
void solve() {
  int n;
  cin >> n;
  vector<int> v;
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    a[x % 10]=min(a[x % 10]+1,3LL);
  }


  for (int i = 0; i < 10; i++) {
    while(a[i])
      v.push_back(i),a[i]--;
  }

  n=v.size();
  debug(v,n);
  int an=0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if((v[i]+v[j]+v[k])%10==3)
          an=1;
        }
      }
    }
  
  if(an)
  cout << "YES\n";
  else
  cout << "NO\n";
}
int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}

