// Problem: B. The Walkway
// Contest: Codeforces Round 893 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1858/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 15 Aug 2023 02:54:30 PM UTC
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
  int n,m,d;
  cin>>n>>m>>d;
  int arr[m];
  int k=n;  
  int ans=0;
  for (auto &i:arr)
    cin>>i;
  ans+=(arr[0]-1)/d;
  for (int i=1; i<m;i++)
  {
    if(arr[i]-arr[i-1]>d)
      ans+=(arr[i]-arr[i-1])/d;
  
  
  }
  ans+=m;
  if (arr[0]==1) 
  ans--;
  else
   ans++;
  // cout << 1+(n-1)/d<<endl;
  cout<<ans<<endl;
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
