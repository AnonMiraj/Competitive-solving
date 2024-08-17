// ﷽
// Contest: Codeforces Round 684 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1440/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 17 Apr 2024 11:08:42 PM EET
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
  int t;
  int su=0;
  vector<int> arr(k*n);
  debug(ceil(k/2.f));
  for (int  i = 0; i < n*k; i++) {
    cin>>arr[i];
  }

  t= (n-ceil(n/2.f));
  debug(t);
  int tmp=0;
  int kk=0;
  while (!arr.empty()) {
    if (t==tmp) {
      su+=arr.back();
      tmp=-1;
      kk++;
      if (kk==k) {
        cout<<su<<"\n";
        return;
        
      }
      
    }
    arr.pop_back();
    tmp++;
  }
  cout<<su<<"\n";


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
