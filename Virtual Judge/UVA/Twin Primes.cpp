// ﷽
// Contest: UVA
//
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-10394
// Memory Limit: 1024
// Time Limit: 3000
// Start: Fri 27 Sep 2024 01:53:13 AM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1},
          dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
using namespace std;

const int NMAX = 20000005;
bitset<NMAX / 2> bits;

vector<pair<int,int>> ans;
void precalcseive() {
  bits.set();
  for (int i = 3; i / 2 < bits.size(); i = 2 * bits._Find_next(i / 2) + 1) {
    for (auto j = (int64_t)i * i / 2; j < bits.size(); j += i)
      bits[j] = 0;
  }
}
void solve() {
  int x;
  while(cin>>x)
  {
    cout<<"(";
    cout<<ans[x-1].F;
    cout<<", ";
    cout<<ans[x-1].S;
    cout<<")\n";


  }

}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  precalcseive();
  debug(bits[5/2]);
  for (int i = 3; i < NMAX-3; i+=2) {
    if(bits[i/2]&&bits[(i+2)/2])
    ans.push_back({i,i+2});
    
  }
  int n = 1;
  /*cin>>n;*/
  while (n--) solve();
  return 0;
}
