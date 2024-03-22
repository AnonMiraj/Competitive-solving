// ﷽
// Contest: Codeforces Round 894 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1862/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 02 Nov 2023 12:42:35 PM UTC
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
  int n,si,cnt=0,ans=0;
  cin>>n>>si;
  string s[n],v="vika";
  for (auto & i : s) {
  cin>>i;
  }
  while (cnt<si) {
  
  for (int i=0 ; i<n ; i++) {
  
    if (v[ans]==s[i][cnt]) {
    ans++;
    break;
    }
  }
  cnt++;
  }
  cout<<(ans==4?"YES":"NO")<<endl;

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
