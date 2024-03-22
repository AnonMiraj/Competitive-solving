// Problem: A. United We Stand
// Contest: Codeforces Round 892 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1859/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 12 Aug 2023 02:35:43 PM UTC
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
  int n;
  cin>>n;
  int arr[n]={};
  for (auto & i:arr)
    cin>>i;
  sort(arr,arr+n);
  if(arr[0]==arr[n-1])
  {
    cout<<-1<<"\n";
    return;
  }
  int x=n-1;
  while (arr[x]==arr[x-1])
    x--;
  cout <<x<<" "<<n-x<<"\n";
  for (int  i = 0; i < x; i++) {
   cout << arr[i] <<" ";
  }
  cout<<"\n";
    for (int  i = x; i < n; i++) {
   cout << arr[i] <<" ";
  }
  cout<<"\n";

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
