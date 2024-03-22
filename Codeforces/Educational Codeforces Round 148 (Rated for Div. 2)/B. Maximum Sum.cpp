// ﷽
// Contest: Educational Codeforces Round 148 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1832/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 04 Jan 2024 06:03:32 PM UTC
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
        int n,i,j,k;
        cin>>n>>k;
        int a[n+1],ans=0,pref[n+1];
        pref[0]=0;
        for(i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        for(i=1;i<=n;i++)
            pref[i]=pref[i-1]+a[i];
        for(i=2*k,j=n;i>=0;i-=2,j--)
        {
            ans=max(ans,pref[j]-pref[i]);
        }
        cout<<ans<<"\n";}
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
