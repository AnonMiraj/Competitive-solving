// ﷽
// Contest: Codeforces Round 950 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1980/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 03 Jun 2024 05:40:41 PM EEST
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
int  n ,f ,k;
cin>>n>>f>>k;
int freq [109]={};
int arr[n];
for(int &i:arr)
{
  cin>>i;
  freq[i]++;
}

int x=arr[f-1];
int ma=freq[x];

for(int i=100;i>0&&k;i--)
{
  int mi=min(k,freq[i]);
  k-=mi;
  freq[i]-=mi;


}
debug(x,k);
if(freq[x]==ma)
cout<<"NO\n";
else if (freq[x]>0)
  cout<<"MAYBE\n";
else 
  cout<<"YES\n";
  



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
