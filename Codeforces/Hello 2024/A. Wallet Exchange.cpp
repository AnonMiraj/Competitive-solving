// ﷽
// Contest: Hello 2024
// Judge: Codeforces
// URL: https://codeforces.com/contest/1919/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 06 Jan 2024 07:04:29 PM UTC
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
  int al ,bo;
  cin>>al>>bo;
  int temp=min(al,bo);
  bool bob = true;
  al-=temp;
  bo-=temp;
  if (al) {
    if (al&1) {
      bob=false;
    }
  
  
  }

  else {
     if (bo&1) {
      bob=false;
    }
  
  }


  if (bob) {
  
    cout<<"Bob\n";
  }
  else
    cout<<"Alice\n";
      // cout<<al<<" "<<bo<<endl;


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
