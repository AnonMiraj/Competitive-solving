// ﷽
// Contest: ECPC Qualifications 2024 Day 3 (Mirror)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/537870/problem/B
// Memory Limit: 256
// Time Limit: 3000
// Start: Mon 07 Oct 2024 02:46:52 PM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

void solve() {
  int n;cin>>n;
  string s;cin>>s;
  map<char,vector<int>>mp;
  for(int i=0;i<n;++i){
    mp[s[i]].push_back(n-i);
  }
  for(int i=0;i<26;++i){
    sort(all(mp[(char)('a'+i)]));
  }
  debug(mp);
  for(int i=0;i<n;++i){
    for(int j=0;j<26;j++){
      auto it=lower_bound(all(mp[(char)('a'+j)]),i+1);
      if(it!=mp[(char)('a'+j)].end()){
        cout<< n-*it+1 << " ";
        break;
      }
    }
  }
  cout<<endl;
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin>>n;
  while (n--) solve();
  return 0;
}