// ﷽
// Contest: EPIC Institute of Technology Round August 2024 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2002/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 11 Aug 2024 07:08:11 PM EEST
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
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define F first
#define S second
#define vi vector<int>

using namespace std;

void solve() {
  int n;
  cin>>n;
  vi a(n),b(n);
  for(auto &i:a)
    cin>>i;

  for(auto &i:b)
    cin>>i;
  int ap1=0,ap2=n-1,bp1=0,bp2=n-1;
  while(ap1<ap2)
  {
    if(a[ap1]!=b[bp1]&&a[ap1]!=b[bp2])
    {
      cout<<"Alice\n";
      return;
    }

    if(a[ap2]!=b[bp1]&&a[ap2]!=b[bp2])
    {
      cout<<"Alice\n";
      return;
    }
    if(a[ap1]==b[bp1])
    {
      ap1++;
      bp1++;
    }
    else if(a[ap1]==b[bp2])
    {
      ap1++;
      bp2--;
    }

    else if(a[ap2]==b[bp1])
    {
      ap2--;
      bp1++;
    }
    else if(a[ap2]==b[bp2])
    {
      ap2--;
      bp2--;

    }
  }
      cout<<"Bob\n";
    

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
