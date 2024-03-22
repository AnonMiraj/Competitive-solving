// ﷽
// Contest: Codeforces Round 111 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/160/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 11 Jan 2024 06:02:25 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <functional>
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
  int sum=0;
  for (auto &i:arr)
  {cin>>i;
  sum+=i;
  }
  sort(arr,arr+n,greater<>());
  int temp =0;
  for(int i=0;i<n;i++)
  {
    temp+=arr[i];
    sum-=arr[i];
    if(temp>sum)
    {
      cout<<i+1;
      return;
    }

  }
  cout<<n;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
