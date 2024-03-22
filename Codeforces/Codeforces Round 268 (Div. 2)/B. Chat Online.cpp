// ﷽
// Contest: Codeforces Round 268 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/469/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 28 Feb 2024 07:48:51 PM UTC
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
  int p, q, l, r;
  cin >> p >> q >> l >> r;
  // int freqa[1001]={};
  // int freqb[1001]={};
  std::bitset<2000> freqa;
  std::bitset<2000> freqb;
  int a, b;
  while (p--) {
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
      freqa.set(i);
    }
  }
  while (q--) {
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
      freqb.set(i);
    }
  }
  int ans =0;
  for (int i = l; i <= r; i++) {
    if ((freqa&(freqb<<i)).any()) {
    ans++;
    }
  }
  cout<<ans;

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
