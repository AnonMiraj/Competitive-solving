// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-12148
// Memory Limit: 1024
// Time Limit: 3000
// Start: Fri 26 Jan 2024 05:43:13 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <ctime>
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
  while (cin>>n&&n) {
    tm s[n];
    time_t a[n];
    int arr[n];
    for (size_t i = 0; i < n; i++) {
      cin>>s[i].tm_mday;
      cin>>s[i].tm_mon;
      cin>>s[i].tm_year;
      cin>>arr[i];
      s[i].tm_year-=1900;
      s[i].tm_mon-=1;
      a[i]=mktime(&s[i]);
      cout<<ctime(&a[i])<<endl;

      
    }


  
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
