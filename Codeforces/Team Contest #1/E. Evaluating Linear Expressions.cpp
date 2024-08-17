// ﷽
// Contest: Team Contest #1
// Judge: Codeforces
// URL: https://codeforces.com/group/qxlLGDBwj5/contest/528100/problem/E
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 24 Jun 2024 10:47:18 AM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

#ifdef ALGOAT
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
  int a,b,k;
  cin>>a>>b>>k;
  int x=1;
  for(int x=1;x<=k;x++)
    cout<<a*x+b<<" ";
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
