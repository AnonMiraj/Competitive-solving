// ﷽
// Contest: The 2023 ICPC Egyptian Collegiate Programming Contest (Qualifications Day 6)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/532378/problem/J
// Memory Limit: 256
// Time Limit: 3000
// Start: Wed 03 Jul 2024 10:14:32 AM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

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
  int n;cin >> n;
  int shit;cin>>shit;
  bitset<40>y(shit),OR;
  for(int i=0;i<n;++i){
    int x;cin>>x;
    OR|=x;
  }
  for(int i=0;i<32;++i){
    if(OR[i]&&!y[i])
    {
      cout << -1 << endl;return;
    }
  }
 
  cout << (y^OR).to_ullong() << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
