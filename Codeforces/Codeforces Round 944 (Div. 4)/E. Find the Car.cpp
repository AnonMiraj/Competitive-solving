// ﷽
// Contest: Codeforces Round 944 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1971/problem/e?csrf_token=a7baf2149da75f24fcce137c2f7e5c29
// Memory Limit: 256
// Time Limit: 3000
// Start: Fri 10 May 2024 06:06:00 PM EEST
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
  int n,k,q;
  cin>>n>>k>>q;
  vector<int>a(k+1);
  vector<int>b(k+1);
  for(int i=1;i<=k;i++)
    cin>>a[i];

  for(int i=1;i<=k;i++)
  {
    cin>>b[i];
  }
  debug(a);
  debug(b);
  int x;
  while(q--)
  {
    cin>>x;
    auto it=lower_bound(a.begin(),a.end(),x);
    if(it==a.begin())
    {
      cout<<0<<" ";
      continue;

    }
    int ind=it-a.begin();
    debug(ind);
    cout<<b[ind-1]+(((x-b[ind-1])*(b[ind]-b[ind-1]))/(a[ind]-a[ind-1]))<<" ";
  }
  cout<<endl;
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
