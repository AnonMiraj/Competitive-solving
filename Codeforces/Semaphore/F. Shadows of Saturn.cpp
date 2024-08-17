// ﷽
// Contest: Semaphore
// Judge: Codeforces
// URL: https://codeforces.com/gym/536143/problem/F
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 10 Aug 2024 01:15:20 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : https://github.com/AnonMiraj/Icpc-refrence
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
#define sz(a) (int)(a).size()
#define pb push_back
#define F first
#define S second
#define vi vector<int>

using namespace std;

void solve() {
  int s,n,k;
  cin>>s>>n>>k;

  int m;
  cin>>m;
  vi v(m);
  for(auto & i: v)
  {
    cin>>i;
    i--;
  }
  int cnt= s-n*k;
  vi freq(s);
  for(int i = cnt;i<k;i++)
  {
    freq[i]=1;

  }

  for(int i = cnt;i<s-k;i++)
  {
    freq[i+k]=freq[i];

  }

  debug(freq);
  int ans=0;
  for(auto & i: v)
  {

  ans++;
  if(ans<m&&cnt==ans)
  {
    cout<<ans+1;
    return;

  }
  if(freq[i])
  {
    cout<<ans;
    return;
  }

  }

    cout<<-1;
  


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
