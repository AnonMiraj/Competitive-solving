// ﷽
// Contest: Semaphore
// Judge: Codeforces
// URL: https://codeforces.com/gym/536143/problem/D
// Memory Limit: 256
// Time Limit: 2000
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

vi can(vi arr,int n){
  vi res(n);
  int sum=0;
  for(int i=0;i<n;++i){
    sum+=arr[i];
    res[i]=(sum%n)+1;
  }
  return res;
}
void solve() {
  int n;cin>>n;
  if(n==1)
  {
    cout << 1 << endl; return;
  }
  if(n&1){cout<< -1<<endl;return;}
  cout << n << ' ';
  for(int i=1;i<n;++i){
    if(i&1)cout<<i<<' ';
    else{
      cout << n-i << ' ';
    }
  }
    cout << endl;
  /*for(int i=1;i<=n;++i)arr[i-1]=i;*/
  /*do{*/
  /*    vi res=can(arr,n);*/
  /*    set<int>st;*/
  /*    for(auto&it:res)st.insert(it);*/
  /*    if(st.size()==n){*/
  /*      debug(arr)*/
  /*    debug(res);*/
  /*    }*/
  /*}while(next_permutation(all(arr)));*/
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
