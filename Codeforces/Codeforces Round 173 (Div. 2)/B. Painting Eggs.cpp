// ﷽
// Contest: Codeforces Round 173 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/282/problem/B
// Memory Limit: 256
// Time Limit: 5000
// Start: Fri 23 Aug 2024 02:58:17 PM EEST
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
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;

void solve() {
  int n;
  cin>>n;
  int sg=0,sa=0;
  int a,g;
  string s;
  while(n--)
  {
    cin>>a>>g;
    if(abs(sg-(sa+a))<=500)
    {
      s+='A';
      sa+=a;
    }
    else     if(abs((sg+g)-(sa))<=500)

    {
      s+='G';
      sg+=g;
    }



  }

    if(abs(sg-sa)<=500)
      cout<<s;
    else
      cout<<-1;

}
int32_t main() {

  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  /*cin>>n;*/
  while (n--)
    solve();
  return 0;
}