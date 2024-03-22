// Contest: Harbour.Space Scholarship Contest 2023-2024 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1864/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 26 Aug 2023 02:46:49 PM UTC
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
  int a ,b, n;
  cin>>a>>b>>n;
  int arr [n];
  arr[0]=b;
  for (int i=1;i<n;i++)
  {
   arr[i]=arr[i-1]-i; 
  }
  if (arr[n-1]<a)
  {

    cout<<-1<<"\n";
    return;
  }
  arr[n-1]=a;
  for (int i=n-1 ;i>=0;i--){
    cout << arr[i]<<" ";
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
