// ﷽
// Contest: Educational Codeforces Round 154 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1861/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 31 Aug 2023 03:25:01 PM UTC
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
#define int long long
using namespace std;

void solve() {
  string s;
  cin >> s;
  int sum = 0;
  int arr[s.size()]={};
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '+')
      sum++,arr[i]=sum;
    else if (s[i] == '-') {
      sum--,arr[i]=sum;
    } else if (s[i] == '0') {
      s[i]='Z',arr[i]=-1;
    }
    else 
      s[i]='O',arr[i]=-2;
  }
  int c=1;
  // cout <<s<< "\n";
  for (auto&i :arr)
    cout<<i<<" ";
  cout<<endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
