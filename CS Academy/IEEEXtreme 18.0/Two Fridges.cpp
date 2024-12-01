// ﷽
// Contest: IEEEXtreme 18.0
//
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/two-fridges/
// Memory Limit: 256
// Time Limit: 300
// Start: Sat 26 Oct 2024 03:41:36 AM EEST
// Reading Time :
// Thinking Time :
// Coding Time :
// Debug Time :
// Submit Count :
// Problem Level :
// Category :
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
bool com(pair<int, int> p1, pair<int, int> p2) {
  if (p1.F != p2.F)
    return p1.F < p2.F;
  else
    return p1.S < p2.S;
}

pair<int, int> f(pair<int, int> p1, pair<int, int> p2) {
  if (p1.S < p2.F) return {999, 999};

  debug(p1, p2);
  return {max(p1.F, p2.F), min(p1.S, p2.S)};
}
void solve() {
 int n;cin>>n;
  vector<pair<int,int>>arr(n);
  for(int i=0;i<n;++i){
    cin>>arr[i].first>>arr[i].second;
  }
  sort(all(arr));

  if(n==0){cout<<-100<<' ' << -100 << endl;return;}
  else if(n==1){cout<<arr[0].F<<' ' << -100 <<endl;return;}
  if(arr[0].F==arr[n-1].F){cout<< -100 << arr[0].F << endl;return;}

  int t1= -101,t2= 101;
  bool f=0;
  for(int i=1;i<n;i++){
    int min1=-100,max1=100;
    int min2=-100,max2=100;
    for(int j=0;j<i;j++){
      min1=max(min1,arr[j].F);
      max1=min(max1,arr[j].S);
    }
    for(int j=i;j<n;j++){
      min2=max(min2,arr[j].F);
      max2=min(max2,arr[j].S);
    }
    if(min1<=max1&&min2<=max2){
      if(!f||min1<t1||(min1==t1&&min2<t2)){
          t1=min1;
          t2=min2;
          f=1;
      }
    }
  }
  if(f){cout<<t1<<' ' <<t2<<'\n';}
  else cout<<-1<<endl;
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

  while (n--) solve();
  return 0;
}

