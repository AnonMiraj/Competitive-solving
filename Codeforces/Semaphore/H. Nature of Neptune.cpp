// ﷽
// Contest: Semaphore
// Judge: Codeforces
// URL: https://codeforces.com/gym/536143/problem/H
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 10 Aug 2024 01:15:20 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : https://github.com/AnonMiraj/Icpc-refrence
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
bool f(vi & v)
{
  vi x =v;
  reverse(all(v));
  if(x==v){
    return true;
  }
  return false;

}

void solve() {
  int n;
  cin>>n;
  vi arr(n);
  for(auto&it:arr)cin>>it;
  vi b,c;
  int l=0,r=n-1;

  while(l<=r){
    if(arr[l]==arr[r]){
      l++;
      r--;
    }
    else {
      for(auto&it:arr){
        if(it!=arr[l]){
          b.push_back(it);
        }
        ir(it!=arr[r]){
          c.push_back(it);
        }
      }
      break;
    }
  }
        debug(b);
        debug(c);

        if(f(arr)||f(b)||f(c))
            {
            cout<<"YES\n";
            return;

            }
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
