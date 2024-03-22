// ﷽
// Contest: Pinely Round 2 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1863/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 30 Aug 2023 02:39:44 PM UTC
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
  int n, a, q;
  cin >> n >> a >> q;
  int pl=0;
  int arr[q + 1];
  arr[0] = a;
  for (int i = 0; i < q; i++) {
    char x;
    cin >> x;
    if (x == '+') {
      arr[i + 1] = 1 + arr[i];
      pl++;
    } else
      arr[i + 1] = -1 + arr[i];
  }


    int ma=*max_element(arr , arr + q+1);
    if(ma>=n)
      cout<<"YES";
    else if (a+pl>=n)
      cout<<"MAYBE";
    else 
      cout<<"NO";
    cout<<'\n';
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
