// ﷽
// Contest: Codeforces Round 942 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1972/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 30 Apr 2024 06:07:53 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <climits>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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
  vector<int> v(n),vv(n);
  int j=0;
  for(auto &i:v){
    cin>>i;
    vv[j++]=i;
  }
  if(n==1){
  cout<<v[0]+k<<"\n";
  return;
  }
  sort(v.begin(),v.end());

  int l=1,manum=v[0];

  int cnt=0,more=0,start=0;
  if(k)

  {
  for(int i=1;i<n;i++)
  {
    if(v[i]!=v[i-1])
    {
      if(k>=l*(v[i]-v[i-1]))
      {
          manum=v[i];
          k-=l*(v[i]-v[i-1]);
      }
      else 
      {
        manum+=k/l;
        k-=(k/l)*l;
        break;
      }
    }
    l++;
  }

  if(k>=n)
  {
        manum+=k/n;
        k-=n*(k/n);
        l=n;
  }

  fill(v.begin(),v.begin()+l,manum);
  debug(k,v);
  while(k)
  {
    cnt=0;
    while(cnt<n-1&&v[cnt+1]==v[cnt])
    {
    cnt++;
    }
    cnt++;
    start = min(cnt-1,k);
    int d=cnt-start;
    debug(d,cnt,start);
    fill(v.begin()+d,v.begin()+start+d,v[0]+1);
    k-=min(cnt,k);
  }
  }

    cnt=0;
    while(cnt<n-2&&v[cnt+1]==v[cnt])
    {
    cnt++;
    }
    if((v[cnt+1])==manum+1)
     manum=v[cnt+1];
    else 
    {
     manum=v[cnt],cnt*=-1;
     cnt--;
     if(*v.begin()==v.back())
       cnt=-1;
    }
    
    debug(v,cnt,manum);


  cout<<manum*(n)-(n-1)-(cnt+1)<<"\n";
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
