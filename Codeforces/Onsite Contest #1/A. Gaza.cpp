// ﷽
// Contest: Onsite Contest #1
// Judge: Codeforces
// URL: https://codeforces.com/group/nxj8A6N6aG/contest/508414/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 13 Mar 2024 03:55:20 AM EET
// Reading Time : 2
// Thinking Time : 5
// Coding Time : 20 + 10 +3
// Comments : something is very tricky it is very deciving i think i got the
// iwer yet their is still a missing edge case
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

string s;
int ma = LONG_MAX, x;
int dp[100001][2];
int dd(int i, int car) {
  if (i == -1) {
    return car;
  }
  if (dp[i][car] == ma) {
    x = s[i] - '0' + car;
    dp[i][car] = min({dp[i][car],(long long)(dd(i-1,1)+10-x),(long long)(dd(i-1,0)+x)});
  }
  return dp[i][car];
}
long long sol(int i , int carry)
{
    if(i == -1)
        return carry;
    if(dp[i][carry] == ma){
        int x = s[i]-'0' + carry;
        dp[i][carry] = min({dp[i][carry],(long long)(sol(i-1,1)+10-x),(long long)(sol(i-1,0)+x)});
    }
    return dp[i][carry];
}
// dp is going to kill me
void solve() {
  cin >> s;
  cout << dd(s.size() - 1, 0);
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  for (int i = 0; i < 100001; ++i) {
    dp[i][0] = ma, dp[i][1] = ma;
  }
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
