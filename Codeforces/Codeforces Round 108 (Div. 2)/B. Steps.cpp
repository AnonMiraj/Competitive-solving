// ﷽
// Contest: Codeforces Round 108 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/152/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 29 Feb 2024 04:41:23 AM UTC
//
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;
bool comparet(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    double distA = std::sqrt(a.first * a.first + a.second * a.second);
    double distB = std::sqrt(b.first * b.first + b.second * b.second);
    
    return distA < distB;
}
void solve() {
  int n,m;
  cin>>n>>m;
  int x,y;
  cin>>x>>y;
  pair<int,int >p;

  p={x,y};
  vector<pair<int,int>>v;
  int t;
  cin>>t;

  while (t--) {
   cin>>x>>y;
   v.push_back({x,y});
  }
  sort(v.begin(),v.end(),comparet);
  int ans=0;
  for (int i=0 ; i< v.size() ; i++) {
    // cout<<v[i].first<<" "<<v[i].second<<"\n";
    while ((p.first+v[i].first<=n&&p.first+v[i].first>0)&&(p.second+v[i].second<=m&&p.second+v[i].second>0)) {
      p.first+=v[i].first;
      p.second+=v[i].second;
      ans++;
    
    }
  
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
