// ﷽
// Contest: Codeforces Round 799 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1692/problem/D
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 11 May 2024 11:05:05 PM EEST
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

bool f(int a,int b){
    string ra = to_string(a);
    if(ra.size()==1)
      ra='0'+ra;
    string rb = to_string(b);
    if(rb.size()==1)
      rb='0'+rb;
    reverse(rb.begin(),rb.end());
    return ra==rb;
    

}
int arr[24*60]={};
void solve() {
  int a,b,k;
  char x;
  cin>>a>>x>>b>>k;
  int an[24*60]={};
  int m=a*60+b;
  int mm=m;
  int ans=0;
  int t=(24*60)/k;
  while(1)
  {
    if(an[mm]==1)
    break;
    if(arr[mm]&&!an[mm])
      ans++;
    an[mm]++;
    mm+=k;
    mm%=(24*60);
  }
  cout<<ans<<"\n";

}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  for(int i=0;i<24*60;i++)
  {
    arr[i]=f(i/60,i%60);
  }
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
