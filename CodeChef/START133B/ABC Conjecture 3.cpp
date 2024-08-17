// ﷽
// Contest: START133B
// Judge: CodeChef
// URL: https://www.codechef.com/START133B/problems/ABCC3
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 08 May 2024 05:59:20 PM EEST
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
  string s;
  cin>>s;
  int pa=-1,pb=-1,pc=-1;
  while(n&&s[n-1]!='c')
  {
    n--;
  }

  if(0==n)
    return void(cout<<0<<"\n");
  for(int i=0;i<n;i++)
  {
    if(s[i]=='a')
    {
      pa=i;
      break;
    }
  }
  if(pa==-1)
    return void(cout<<0<<"\n");

  for(int i=pa;i<n;i++)
  {
    if(s[i]=='b')
    {
      pb=i;
      break;
    }
  }

  if(pb==-1)
    return void(cout<<0<<"\n");
  for(int i=pb;i<n;i++)
  {
    if(s[i]=='c')
    {
      pc=i;
      break;
    }
  }

  if(pc==-1)
    return void(cout<<0<<"\n");
  int cnt=0;
  
  while(1)
  {
    while(pa!=n&&s[pa]!='a')
    {
      pa++;
    }
    if(pa==n)
    {
      break;
    }
    if(pa>=pb)
    {
      pb++;
    }
    while(pb!=n&&s[pb]!='b')
    {
      pb++;
    }
    if(pb==n)
    {
      break;
    }
    while(pc!=n&&s[pc]!='c')
    {
      pc++;
    }
    if(pc==n)
    {
      break;
    }
    cnt++;
    pa++;
    pc++;

  }
  cout<<cnt<<"\n";


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
