// ﷽
// Contest: Codeforces Round 861 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1808/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 26 Mar 2024 06:50:51 AM EET
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

int Calc(int i){
    string n = to_string(i);
    return (*max_element(n.begin(),n.end()) - *min_element(n.begin(),n.end()));
}
void solve() {
  int l,r;
  cin>>l>>r;

  
  int x;
  int ans =0,in=l;
  for (int  i = l; i <=r; i++) {
    x=Calc(i);

    if (ans<=x) {
      ans=x;
      in =i;
    }
    if (ans==9) {
      break;
      
    }
  }
  cout<<in<<"\n";
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
