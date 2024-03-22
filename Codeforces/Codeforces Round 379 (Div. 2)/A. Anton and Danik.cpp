// ﷽
// Contest: Codeforces Round 379 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/734/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 24 Jan 2024 05:17:10 AM UTC
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
  int cnt=0;
  char temp;
  cin>>n;
  for (int i = 0; i < n; i++) {

    cin>>temp;
    if(temp=='A')
      cnt++;
  }
  if (cnt>n-cnt) {
    cout<<"Anton";
  }
  else if (cnt<n-cnt) {
    cout<<"Danik";
  }
  else 
    cout<<"Friendship";

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
