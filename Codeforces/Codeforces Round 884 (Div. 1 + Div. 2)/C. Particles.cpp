// ﷽
// Contest: Codeforces Round 884 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1844/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 03 Jan 2024 05:38:10 PM UTC
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
  int n;
  cin>>n;
  int arr[n];
  bool neg=true;
  for (int i=0  ;i<n;i++ ) {
    cin>>arr[i];
    if(arr[i]>0){
      neg=0;
    }

  
  }
    int ans=INT_MIN;

  if(neg){


  for (int i=0  ;i<n;i++ ) {
    ans=max(ans,arr[i]);
    
    }
  cout<<ans<<endl;
  return;
  }
  int ev=0,od=0; 
  for (int i=0;i<n;i+=2 ) {
    ev+= max(arr[i],(int)0);
    
    }
   for (int i=1;i<n;i+=2 ) {
    od+= max(arr[i],(int)0);
    
    } 
   cout<<max(ev,od)<<endl;
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
