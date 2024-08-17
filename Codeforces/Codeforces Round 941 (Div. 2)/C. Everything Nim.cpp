// ﷽
// Contest: Codeforces Round 941 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1966/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 28 Apr 2024 08:24:41 AM EEST
// Reading Time : 3
// Thinking Time : 50
// Coding Time :  20
// Comments : keep getting WA no hope
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

void solve() {
  int n;
  set<int>s;
  int t;
  cin>>n;
  int a,b;
  for(int i=0;i<n;i++){
    cin>>a;
    s.insert(a);
  }
  t=s.size();
  int turns=0;
  debug(s,t);

  a=1;
  t=*s.rbegin();

  for(auto i:s){
    if(i==a)
      a++;
    else
      break;

  }
  t=min(t,a);


    if(t&1)
   cout<<"Alice\n";
    else
  cout<<"Bob\n";
 
  
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
