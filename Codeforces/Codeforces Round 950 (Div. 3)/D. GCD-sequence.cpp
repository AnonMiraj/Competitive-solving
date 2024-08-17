// ﷽
// Contest: Codeforces Round 950 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1980/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 03 Jun 2024 06:35:31 PM EEST
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
  int n;
bool isGood(vector<int> &a)
{

  int prev=__gcd(a[0],a[1]);
  int cur;
  for(int i =1;i<n-2;i++)
  {
    cur = __gcd(a[i],a[i+1]);
    if(cur<prev)
    {
      return 0;
    }
    prev=cur;
  }
  return 1;

}

int jj=0;
void solve() {
  cin>>n;
  debug(jj++);

  vector<int> arr(n);

  vector<int>a,b,c;
  for(int &i:arr)
    cin>>i;

  int prev=-1;
  int cur,ind=-1;
  for(int i =0;i<n;i++)
  {
    cur = __gcd(arr[i],arr[i+1]);
    if(cur<prev)
    {
      ind =i;
      break;
    }
    prev=cur;
  }
  debug(ind);
  if(ind==-1)
  {
    cout<<"YES\n";
    return;
  }


  for(int i =0;i<n;i++)
  {
    if(i!=ind+1)
    a.push_back(arr[i]);
    if(i!=ind)
    b.push_back(arr[i]);
    if(i!=ind-1)
    c.push_back(arr[i]);
  }
  debug(arr);
  debug(a);
  debug(b);
  debug(c);
  if(isGood(a)||isGood(b)||isGood(c))
    cout<<"YES\n";
  else 
    cout<<"NO\n";



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
