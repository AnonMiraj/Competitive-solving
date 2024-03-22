// ﷽
// Contest: Codeforces Round 927 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1932/problem/A
// Memory Limit: 512
// Time Limit: 1000
// Start: Sun 18 Feb 2024 12:15:17 PM UTC
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
  int ans=0;
  if (s[0]=='@') {
    ans++;
  
  }
  for (size_t i = 1; i < s.size(); i++) {

    if (s[i]=='@') {
    
      ans++;
    }
    if (s[i]==s[i-1]&&s[i]=='*') {
                cout<<ans<<'\n';

        return;

    
    }
    


  }
          cout<<ans<<'\n';

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
