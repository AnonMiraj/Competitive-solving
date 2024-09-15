// ﷽
// Contest: Codeforces Round 297 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/525/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 23 Aug 2024 04:35:23 PM EEST
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
  int k=s.size();
  int n;
  cin >> n;
  int t;

  vector<int> pref(s.size()+2);
  for (int i = 0; i < n; i++) {
    cin>>t;
    pref[t]++;
    pref[k-t+2]--;
  }
  for (int i = 1; i <= k/2; i++) {
    pref[i]+=pref[i-1];
    if(pref[i]&1)
      swap(s[i-1],s[k-i]);
  }
  cout<<s;
  debug(pref);

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
