// ﷽
// Contest: START132D
// Judge: CodeChef
// URL: https://www.codechef.com/START132D/problems/GAME_XI
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 01 May 2024 05:35:07 PM EEST
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
#include <numeric>
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
  int n,m;
  cin>>n>>m;

  int arr[n],brr[m];

  for(auto &i:arr)
    cin>>i;
  for(auto &i:brr)
    cin>>i;

  if(n<4||m<4||(n+m)<11)
    
  {
    debug(n,m,n+m);
    return void(cout<<-1<<"\n");

  }
  sort(arr,arr+n,greater<>());
  sort(brr,brr+m,greater<>());
  priority_queue<int>q;
  for(int i =4;i<n&&i<15;i++)
  {
    q.push(arr[i]);
  }
  for(int i =4;i<m&&i<15;i++)
  {
    q.push(brr[i]);
  }

  int ans=0;

  for(int i =0;i<4;i++)
  {
    ans+=arr[i];
  }
  for(int i =0;i<4;i++)
  {
    ans+=brr[i];
  }

  for(int i =0;i<3;i++)
  {
    ans+=q.top();
    q.pop();
  }
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
