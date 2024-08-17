// ﷽
// Contest: Educational Codeforces Round 165 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1969/problem/0
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 29 Apr 2024 05:37:42 PM EEST
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
  vector<int> adj;
  int a;
  for(int i=0;i<n;i++){
    cin>>a;
    a--;
    adj.push_back(a);
  }
  int ans=INT_MAX;
  int cnt =1;
  for(int i=0;i<n;i++){
   int cur= adj[i];
   cnt=1;
   while(cur!=i)
   {
      cur= adj[cur];
      cnt++;
   }
   ans=min(cnt,ans);
  }
  cout<<max(min(ans,3LL),2LL)<<"\n";

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
