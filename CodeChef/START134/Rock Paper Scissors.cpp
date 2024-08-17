// ﷽
// Contest: START134
// Judge: CodeChef
// URL: https://www.codechef.com/problems/ROCPAPSCI
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 16 May 2024 09:56:35 PM EEST
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
  int an=0;
  if(n==1)
  {
  cout<<1<<"\n";

  return;
  }
  for(int i=0;i<n-1;i++)
  {
    an++;
    if(s[i]==s[i+1])
      i++;
  }
  char c=s[n-1];
  int x=0;
  while(!s.empty()&&s.back()==c)
  {
    x++;
    s.pop_back();

  }

  if(x&1)
    an++;
  cout<<an<<"\n";


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
