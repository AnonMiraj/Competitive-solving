// ﷽
// Contest: Semaphore
// Judge: Codeforces
// URL: https://codeforces.com/gym/536143/problem/A
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

void solve() {
  string s;
  cin >> s;
  int cnt=0,cnt2=0;
  for(auto&it:s){
    if(it>='a'&&it<='z')cnt++;
    else cnt2++;
  }
  if(cnt>=cnt2){
    for(auto&it:s){
      char ch;
      ch=it;
      if(it>='A'&&it<='Z'){
        ch=(char)(it+32);
      }
        cout << ch;
    }
  }else{
    for(auto&it:s){
      char ch;
      ch=it;
      cout << char(towupper(ch));
    }
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
