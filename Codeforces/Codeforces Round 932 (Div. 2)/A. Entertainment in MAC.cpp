// ﷽
// Contest: Codeforces Round 932 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1935/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 05 Mar 2024 04:36:52 PM EET
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
  string s;
  cin>>n>>s;
  string ans=s;
  reverse(s.begin(),s.end());
  s+=ans;
  //cout<<s<<endl;
  cout<<(s>ans? ans:s)<<endl;

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
