// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-10452
// Memory Limit: 1024
// Time Limit: 3000
// Start: Fri 26 Jan 2024 06:07:08 AM UTC
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
  int m, n;
  cin >> m >> n;

  string I = "IEHOVA#";
  int o = 0;
  int x, y = m-1;

  string s[m];
  for (int i = 0; i < m; i++) {
    cin >> s[i];
  }
  x = s[y].find("@");
  while (o!=7) {
    if (o!=0) {
    
      cout<<" ";
    }
    if (s[y-1][x]==I[o]) {
      cout<<"forth";
      y--;
    }
    else if (x!=n-1&&s[y][x+1]==I[o]) {
       cout<<"right";
      x++;
   
    }
    else if (x!=0&&s[y][x-1]==I[o]) {
       cout<<"left";
      x--;
   
    }

      o++;
  
  }
  cout<<"\n";
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
