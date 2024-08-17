// ﷽
// Contest: The 2023 ICPC Egyptian Collegiate Programming Contest (Qualifications Day 6)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/532378/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 03 Jul 2024 10:23:32 AM EEST
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

  int n,k;
  cin>>n>>k;
  vector<pair<int,int>> v(k);
  vector<pair<int,int>> merg;
  for(auto &[a,b]:v)
  {
    cin>>a>>b;
  }
  sort(v.begin(),v.end());
  int p1=1;
  int s = 0;
  merg.push_back(v[0]);
  while(p1!=k)
  {
    if(merg[s].second>v[p1].first)
    {
      merg[s].first=min(v[p1].first,merg[s].first);
      merg[s].second=max(merg[s].second,v[p1].second);
    }
    else
    {
    merg.push_back(v[p1]);
    s++;
    }
    p1++;
  }


    vector<bool> busy(n + 1, false);
    
    for (int i = 0; i <= s; ++i) {
        for (int j = merg[i].first; j <= merg[i].second; ++j) {
            busy[j] = true;
        }
    }

    int maxi = 0, curr = 0;
    for (int i = 1; i <= n; ++i) {
        if (busy[i]) {
            maxi = max(maxi, curr);
            curr = 0;
        } else {
            ++curr;
        }
    }
    maxi = max(maxi, curr);
    cout<<maxi;
  debug(v);
  debug(merg);



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
