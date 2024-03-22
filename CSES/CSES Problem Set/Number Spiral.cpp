// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1071
// Memory Limit: 512
// Time Limit: 1000
// Start: Wed 16 Aug 2023 09:00:03 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;
int smt(int y) {
  return 1 + y*(y-1);
}
int wtf(int x,int y,int z)
{
  z=x>y?x:y;z=z*z-~(z%2?y-x:x-y)-z;
  return z;
}
void solve() {
  int x, y;
  cin >> x >> y;
  // bool flag =y&1;
  // if(x>y){
  //
  //   swap(x,y);
  //   flag=!flag;
  // }
  // if(flag)
  // cout<<smt(y)+(y-x)<<endl;
  // else 
  // cout<<smt(y)-(y-x)<<endl;

  cout <<wtf(x,y,max(x,y))<<endl;
  // cout << smt(x) << " " << smt(y) << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
