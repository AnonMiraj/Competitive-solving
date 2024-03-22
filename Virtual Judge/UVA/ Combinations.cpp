// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-369
// Memory Limit: 1024
// Time Limit: 3000
// Start: Sat 10 Feb 2024 03:40:28 AM UTC
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
    vector<vector<unsigned int>> pascal(101, vector<unsigned int>(101, 0));
    for (int i = 0; i <= 100; i++) {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
    }
    for (int i = 2; i <= 100; i++) {
        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
        }
    }      unsigned int n,m;
      while (cin>>n>>m&&n) {
        cout<<n<<" things taken "<<m<<" at a time is " <<pascal[n][m]<<" exactly.\n";
      
      }

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
