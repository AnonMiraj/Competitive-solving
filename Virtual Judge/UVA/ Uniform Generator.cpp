// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-408
// Memory Limit: 1024
// Time Limit: 3000
// Start: Wed 24 Jan 2024 06:24:56 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <ios>
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
void seeds(int step,int mod)

{
  int prev=-step;

  for (int i =0  ;i<mod;i++ ) {
    cout<<(prev+step)%mod<<" ";
    prev=(prev+step)%mod;
  
  }

}

void solve() {
  int a,b;
  while (cin>>a>>b) {
    
    if(__gcd(a,b)==1)
          std::cout << std::setw(10) << a << std::setw(10) << b  <<"    "<< "Good Choice\n\n" ;
    else
          std::cout << std::setw(10) << a << std::setw(10) << b <<"    "<< "Bad Choice\n\n" ;

  
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
