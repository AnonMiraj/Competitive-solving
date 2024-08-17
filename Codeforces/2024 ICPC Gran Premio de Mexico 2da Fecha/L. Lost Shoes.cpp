// ﷽
// Contest: 2024 ICPC Gran Premio de Mexico 2da Fecha
// Judge: Codeforces
// URL: https://codeforces.com/gym/105216/problem/L
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 05 Jul 2024 10:38:32 AM EEST
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
  int n;
  cin>>n;

  int ct=0;
  vector<int> l(n+1),r(n+1);
    for (int i = 1; i < n+1; i++) {
        cin >> r[i];
    }
    for (int i = 1; i < n+1; i++) {
        cin >> l[i];
    }
 
    for (int i = 1; i < n+1; i++) {
        if (r[i] == i) continue;
        swap(r[i], r[r[i]]);
        i--; ct++;
    }
    for (int j = 1; j < n+1; j++) {
        if (l[j] == j) continue;
        swap(l[j], l[l[j]]);
        j--; ct++; 
    }
  debug(r);
  debug(l);
  cout<<ct;
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
