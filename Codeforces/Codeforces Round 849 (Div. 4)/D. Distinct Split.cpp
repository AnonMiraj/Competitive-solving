// ﷽
// Contest: Codeforces Round 849 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1791/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 23 Mar 2024 10:32:06 PM EET
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <climits>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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
  string s;
  int freq1[26]={};
  int freq2[26]={};
  cin>>s;
  int suff[n+2]={},pref[n+1]={};
  for (int  i = 1; i <= n; i++) {
    if (!freq1[s[i-1]-'a']) {
      pref[i]++;
      freq1[s[i-1]-'a']=1;
    }
        
    if (!freq2[s[n-i]-'a']) {
      suff[n-i]++;
      freq2[s[n-i]-'a']=1;
    }

      pref[i]+=pref[i-1];
      suff[n-i]+=suff[(n-i)+1];
  }
  int ans =0;
  for (int  i = 1; i <= n; i++) {
    ans =max(ans,pref[i]+suff[i]);
  }
  cout<<ans<<"\n";
  debug_itr(pref,pref+n+1);
  debug_itr(suff,suff+n+1);
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
