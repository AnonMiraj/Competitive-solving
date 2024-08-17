// ﷽
// Contest: START132D
// Judge: CodeChef
// URL: https://www.codechef.com/START132D/problems/OPTMFLP18
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 01 May 2024 06:52:59 PM EEST
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

int super(long long n) { return (n * (n + 1)) / 2 ; }

void solve() {

  int n;
  cin>>n;
  int t,prev=-1;
  int ev=0,od=0;

  vector<int>odds;

  for(int i=0;i<n;i++){
    cin>>t;
    if(t&1)
    {
      od++;
    }
    else 
    {
      ev++;
      if(od)
        odds.push_back(od);

      od=0;
    }


  }

  if(od)
   odds.push_back(od);
  int x= odds[((max_element(odds.begin(),odds.end())-odds.begin()))]-1;
odds[((max_element(odds.begin(),odds.end())-odds.begin()))]=ceil(x/2.f);
odds.push_back(floor(x/2.f));
  debug(odds);
  int ans=super(n);
  for(auto i:odds)
    ans-=super(i);

  cout<<ans<<"\n";
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
