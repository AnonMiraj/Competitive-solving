// ﷽
// Contest: Codeforces Round 832 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1747/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 25 May 2024 03:05:18 AM EEST
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
  vector<int>v;

  for(int i=0;i<n;i++)
  {
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
  }
  int p2=3*n-1;
  if(n==1)
  {
    cout<<"1\n1 2\n";
    return;

  }

  debug(v);
  vector<pair<int,int>>ans;
  for(int i=1;p2>i&&i<3*n&&v[p2]==3;i+=3)
  {
    if(v[i]==3)
      continue;


    swap(v[i],v[p2]);
    ans.push_back({i+1,p2+1});
    p2-=3;

  }
  cout<<ans.size()<<"\n";
  for(auto [i,j]:ans)
  {
    cout<<i<<" "<<j<<"\n";

  }

  debug(v);
  // 123123123123
  // 333121122123
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
