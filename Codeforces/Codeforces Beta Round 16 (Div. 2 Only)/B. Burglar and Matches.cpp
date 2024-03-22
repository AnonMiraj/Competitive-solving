// ﷽
// Contest: Codeforces Beta Round 16 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/16/problem/B
// Memory Limit: 64
// Time Limit: 500
// Start: Sat 10 Feb 2024 02:43:45 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <functional>
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int n,m;
  cin>>n>>m;
  int ans=0;
  vector<pair<int , int >>v(m);
  for (int i=0;i<m;i++) {
    cin>>v[i].second>>v[i].first;
  
  }
  sort(v.begin(),v.end(),greater<>());
   for (int i=0;n>0&&i<m;i++) {
     ans+=min(n,v[i].second)*v[i].first;
     n-=min(n,v[i].second);
     
  
  }
  
   cout<<ans;
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
