// ﷽
// Contest: QCPC 2024 (Mirror)
//
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/551747/problem/D
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 14 Oct 2024 11:20:08 AM EEST
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
  map<int,int>mp;
  set<int>st;
  for(int i=0;i<n;++i){
    int x;cin>>x;
    st.insert(x);
    mp[x]++;
  }
  vector<int> arr(all(st));
  st.clear();
  for(int i=0;i<arr.size();++i){
    if(st.find(arr[i])!=st.end()){
      if(!mp.count(arr[i]-1)&&arr[i]!=0){
        mp[arr[i]]--;
        mp[arr[i]-1]++;
      }
      if(mp[arr[i]]>0){
        st.insert(arr[i]+1);
        mp[arr[i]]=0;
        continue;
      }
    }

    if(!mp.count(arr[i]-1)&&arr[i]!=0){
      mp[arr[i]]--;
      mp[arr[i]-1]++;
    }
    if(mp[arr[i]]>1){
      st.insert(arr[i]+1);
      mp[arr[i]]=1;
    }
  }
  debug(st);
  debug(mp); 
  for(auto&it:mp){
    st.insert(it.first);
  }

  cout<<st.size()<<endl;
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}