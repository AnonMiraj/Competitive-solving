// ﷽
// Contest: Team Contest #1
// Judge: Codeforces
// URL: https://codeforces.com/group/qxlLGDBwj5/contest/528100/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 24 Jun 2024 10:59:04 AM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

#ifdef ALGOAT
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long

using namespace std;
int f(int L,int W,int l,int w)
{

  return ceil(L/l)*(W/w);


}
void solve() {
int L,W,H;
int l,w,h;
cin>>L>>W>>H;
cin>>l>>w>>h;
int ans=-1;
ans = max(ans,(W/w)*(H/h)*(L/l));
ans = max(ans,(W/w)*(H/l)*(L/h));
ans = max(ans,(W/h)*(H/w)*(L/l));
ans = max(ans,(W/h)*(H/l)*(L/w));
ans = max(ans,(W/l)*(H/w)*(L/h));
ans = max(ans,(W/l)*(H/h)*(L/w));
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
