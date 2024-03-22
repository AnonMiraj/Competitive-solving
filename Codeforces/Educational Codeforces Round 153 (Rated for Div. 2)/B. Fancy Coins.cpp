// Contest: Educational Codeforces Round 153 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1860/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 17 Aug 2023 02:48:01 PM UTC
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

void solve() {
  int m,k,i,ik;
  cin>>m>>k>>i>>ik;
  int xk=m/k;
  int xi=(m-xk*k);
  xk-=ik;
  xi-=i;
  xk+=xi/k;
  xk=max(xk,(int)0);
  xi=max(xi,(int)0);
  cout<<xk+xi<<endl;
  // xk=xk-ik;
  // if(xk<0)
    // xk=0;
  // xi+=xk*k;
  // xi-=i;
  // if (xi<0)
    // xi=0;
  // cout<<xi<<endl;
  // cout << xi/k+(xi-k*(xi/k))<<endl;
  // cout <<max(0,ik-xk)
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
