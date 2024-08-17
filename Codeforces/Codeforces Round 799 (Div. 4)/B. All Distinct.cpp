// ﷽
// Contest: Codeforces Round 799 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1692/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 11 May 2024 10:31:55 PM EEST
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

int arr[24*60]={};
// 11 11
// arr[11*60+11]=1;
bool f(int a,int b){
    int ra = 0;
    while (a > 0) {
        int d = a % 10;
        ra = ra * 10 + d;
        a /= 10;
    }
    return a==b;

}
void solve() {
  int a,b,k;
  char x;
  cin>>a>>x>>b>>k;
  int m=a*60+b;
  int mm=m;
  int ans=0;
  int t=(24*60)/k;
  int arr[24*60]={};
  while(mm>=a&&mm<=24*60)
  {
    if(arr[mm])
      ans++;
    mm=(mm+k);
  }
  mm%=24*60;
  while(mm<a)
  {
    if(arr[mm])
      ans++;
    mm=(mm+k)%(24*60);
  }
  cout<<ans<<"\n";

}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  for(int i=0;i<24*60;i++)
  {
    arr[i]=f(i/60,i%60);
  }
  debug_itr(arr,arr+100);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
