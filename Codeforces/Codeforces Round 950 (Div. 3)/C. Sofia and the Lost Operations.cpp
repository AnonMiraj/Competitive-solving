// ﷽
// Contest: Codeforces Round 950 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1980/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 03 Jun 2024 06:06:33 PM EEST
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

  vector<int> a(n);
  for(auto &i:a)
    cin>>i;

  vector<int> b(n);

  for(auto &i:b)
    cin>>i;
  int m;

  cin>>m;
  map<int,int> mar;
  int pm=0,d;
  for(int i=0;i<m;i++)
  {
    cin>>d;
    mar[d]++;
    pm=d;
  }
  if(find(b.begin(),b.end(),pm)==b.end())
  {
    cout<<"NO\n";
    return;

  }
  
  

  int tr=0;

  for(int i=0;i<n;i++)
  {
    while(a[i]!=b[i])
    {
      if(mar[b[i]])
      {
      mar[b[i]]--;
      tr=1;
      a[i]=b[i];
      }
      else 
      {

      cout<<"NO\n";
      return;
      }
      
    }
  }

      cout<<"YES\n";
  debug(a,b);
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
