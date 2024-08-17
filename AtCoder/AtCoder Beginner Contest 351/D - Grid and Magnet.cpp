// ﷽
// Contest: AtCoder Beginner Contest 351
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc351/tasks/abc351_d
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat 27 Apr 2024 03:50:16 PM EEST
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

int w,h;
char a[1009][1009]={};
map<pair<int,int>,int>m;
void fi(int i,int j){
if(a[i][j]!='#')
    a[i][j]='*';

}
int cnt=0;
int dfs(int y, int x) {

  if (x==0||x==w+1||y==0||y==h+1) {
    return 0;
  }
  if(a[y][x]=='*'&&!m[{y,x}])
  {
    m[{y,x}]++;
    return 1;
  }

  if(a[y][x] != '.'){
    return 0;
  }


  a[y][x] = '0';

  return dfs(y + 1, x) + dfs(y, (x + 1)) + dfs(y-1, x) +
         dfs(y, (x - 1 ))+1;
}
void solve() {
cin>>h>>w;
for (int i =1 ;i<=h;i++){
for (int j =1 ;j<=w;j++){
  cin>>a[i][j];
}}
for (int i =1 ;i<=h;i++){
for (int j =1 ;j<=w;j++){
  if(a[i][j]=='#')
  {
    fi(i+1,j);
    fi(i,j+1);
    fi(i-1,j);
    fi(i,j-1);
  }
}}
int ans = 1;
for (int i =1 ;i<=h;i++){
for (int j =1 ;j<=w;j++){
  if(a[i][j]=='.')
  {
    ans=max(dfs(i,j),ans);
    m.clear();
  }
}}

for (int i =1 ;i<=h;i++){
  debug_itr(a[i]+1,a[i]+w+1);
}
cout<<ans;

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
