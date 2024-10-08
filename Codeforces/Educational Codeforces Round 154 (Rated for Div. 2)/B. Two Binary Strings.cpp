// ﷽
// Contest: Educational Codeforces Round 154 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1861/problem/B#
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 31 Aug 2023 02:51:23 PM UTC
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

// void solve() {
//   string a ,b;
//   cin>>a>>b;
//   int u=-1,d=-1;
//   for (int i=1 ; i<a.size(); i++) {
//   if(a[i]==b[i]&&b[i]=='0')
//    u=i;
//   }
//   for (int i=1 ; i<a.size(); i++) {
//   if(a[i]==b[i]&&b[i]=='1')
//   {d=i;
//   break;
//   }
//   }
// // cout<<u<<" "<<d<<endl;
//   if(d-u==1)
//     cout<<"YES1\n";
//   else if (d==1)
//     cout<<"YES2\n";
//   else if(u==a.size()-2)
//     cout<<"YES3\n";
//   else
//     cout<<"NO\n";
// }
void solve() {
  string a, b, c;
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == b[i] && a[i] == '1') {
      c += '1';
      continue;
    }
    if (a[i] == b[i] && a[i] == '0') {
      c += '2';
      continue;
    }
    c += '0';
  }

  for (int i = a.size() - 2; i > 0; i--) {
    if (c[i] == '2' && c[i + 1] == '1') {
      cout << "YES\n";
      return;
    }
  }
  for (int i = 1; i < a.size(); i++) {
    if (c[i] == '1' && c[i - 1] == '2') {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
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
