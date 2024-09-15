// ﷽
// Contest: Codeforces Round 169 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/276/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 23 Aug 2024 04:05:11 PM EEST
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
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {
  string s;
  cin>>s;
  map<char,int> m;
  for (auto i: s) {
    m[i]++;
  }
  int cnt=0;

  for (auto i: m) {
    cnt+=i.second&1;
  }
  if(cnt==0)
  {
    cout<<"First";
    return;
  }
  if(!(cnt&1))
    cout<<"Second";
  else 
    cout<<"First";


}
int32_t main() {

  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--)
    solve();
  return 0;
}
