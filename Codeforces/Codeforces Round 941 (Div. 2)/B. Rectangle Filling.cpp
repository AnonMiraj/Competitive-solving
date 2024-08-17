// ﷽
// Contest: Codeforces Round 941 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1966/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 28 Apr 2024 09:43:16 AM EEST
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

int W=0,B=0,X=0;
void ff(int &left,int m){
  if(left==m)
  {
    left=1;
    W++;
    return;
  }

   if (left ==0)
   {
    left = -1;
    B++;
    return;
   }
   left=0;
  X++;

}
void solve() {
  int n,m;
  cin>>n>>m;
  string b[n];
  int up =0, down=0 ,left=0,right=0;
  for(int i =0;i<n;i++){
        cin>>b[i];
  }
  if(n==1){
    if(b[0][m-1]==b[0][0])
      cout <<"YES\n";
    else
      cout <<"NO\n";
  debug(left,right);
  debug(up,down);
    return;
  }
  if(m==1){
    if(b[n-1][0]==b[0][0])
      cout <<"YES\n";
    else
      cout <<"NO\n";
  debug(left,right);
  debug(up,down);
    return;
  }
  for(int i =0;i<n;i++){
        left+=(b[i][0]=='W');
        right+=(b[i][m-1]=='W');
  }

  for(int i =0;i<m;i++){
        up+=(b[0][i]=='W');
        down+=(b[n-1][i]=='W');
  }

  ff(left,n);
  ff(right,n);
  ff(up,m);
  ff(down,m);

  debug(left,right);
  debug(up,down);
  if(up&&!(up+down))
  {
        cout <<"NO\n";
        return;
  }
  if(right&&!(right+left))
  {
        cout <<"NO\n";
        return;
  }


  if(W+X>=3){
      cout <<"YES\n";
      return;
  }
  if(B+X>=3){
      cout <<"YES\n";
      return;
  }
      cout <<"NO\n";
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
