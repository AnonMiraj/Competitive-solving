// ﷽
// Contest: Codeforces Round 941 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1966/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 27 Apr 2024 05:35:08 PM EEST
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

void solve() {
int n,k;
cin>>n>>k;
int freq[111]={};
int t;
for(int i=0;i<n;i++){cin>>t;
  freq[t]++;
}

sort(freq,freq+102,greater<>());
int p1=0;
debug_itr(freq,freq+10);
int am=0;
int su=0;

int i;
if(freq[0]>=k){

  cout<<k-1<<"\n";
  return;
}


cout<<n<<"\n";
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
