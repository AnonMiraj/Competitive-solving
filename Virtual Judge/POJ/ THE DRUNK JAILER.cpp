// ﷽
// Contest: POJ
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/POJ-1218#author=0
// Memory Limit: 9
// Time Limit: 1000
// Start: Fri 16 Feb 2024 08:49:23 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
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
// #define int long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  // bool arr[101] = {};
  // for (int i=1 ; i<=n ; i++) {
  //   for (int j=i; j<=n ; j+=i) {
  //     arr[j]=!arr[j];
  //   }
  // 
  // }
  //
  int ans=(int)sqrt(n);;

  // for (int i=1 ; i<=n ; i++) {
  //   if (arr[i]) {
  //     ans++;
  //   
  //   }
  // }
  cout<<ans<<'\n';
}
int main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
