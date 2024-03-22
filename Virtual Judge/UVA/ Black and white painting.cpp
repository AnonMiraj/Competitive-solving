// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-11231
// Memory Limit: 1024
// Time Limit: 3000
// Start: Thu 25 Jan 2024 05:38:58 AM UTC
//
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  int a,b,c;
  int x=0,y=0,z=0;
  while (cin>>a>>b>>c&&a!=0) {
    if(!c)
    {
      // a--;
      // b--;
    }
    
    x=a-7;
    y=b-7;
    


    
    if ((x*y)&1) {
    
    cout<< (x*y)/2+c<<"\n";
    }
    else {
    cout<< (x*y)/2<<"\n";
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
