// ﷽
// Contest: Codeforces Round 946 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1974/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 20 May 2024 05:59:07 PM EEST
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

  int n ;
  string s,r;
  
  cin>>n>>s;
  int freq[26]={};
  for(char i:s)
    freq[i-'a']++;
  for(char i:s)
  {
    if(freq[i-'a'])
    {
      freq[i-'a']=0;
      r+=i;
    }
  }
  sort(r.begin(),r.end());
  map<char,char>m;
  n=r.size();
  for(int i=0;i<=n/2;i++)
  {
    m[r[i]]=r[n-(i+1)];
    m[r[n-(i+1)]]=r[i];
  }
  debug(m);
  debug(s);
  debug(r);

  
  for(char i:s)
    cout<<m[i];
  cout<<"\n";


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
