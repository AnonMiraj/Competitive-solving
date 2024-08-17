// ﷽
// Contest: Codeforces Round 944 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1971/problem/G
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 10 May 2024 06:59:18 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
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
  vector<int> arr(n);
  map<int,vector<int>>a;
  int t;
  for(int i=0;i<n;i++)
  {
    cin>>t;
    arr[i]=t/4;
    a[t/4].push_back(t);
  }
  for(auto &[k,i]:a)
  {
    sort(i.begin(),i.end(),greater<>());
  }
  for(int i=0;i<n;i++)
  {
    cout<<(a[arr[i]].back())<<" ";
    a[arr[i]].pop_back();
  }
  cout<<"\n";
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
