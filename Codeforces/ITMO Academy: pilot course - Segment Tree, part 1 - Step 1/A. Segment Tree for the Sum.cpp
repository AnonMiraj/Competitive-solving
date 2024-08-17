// ﷽
// Contest: ITMO Academy: pilot course - Segment Tree, part 1 - Step 1
// Judge: Codeforces
// URL: https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
// Memory Limit: 1024
// Time Limit: 1000
// Start: Sun 16 Jun 2024 05:13:30 AM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
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

struct seg{
  int size;
  vector<int> sums;
  void init(int n){
    size= 1;
    while(size<n) size*=2;
    sums = vector<int>(2*size,0LL);
  }

  void build(vector<int> &v,int x,int lx,int rx){
    if(rx-lx==1)
    {
      if(lx<(int)v.size())
        sums[x]=v[lx];
      return;
    }
    int m=(lx+rx)/2;
    build(v,2*x+1,lx,m);
    build(v,2*x+2,m,rx);
    sums[x]=sums[2*x+1]+sums[2*x+2];
  }

  void build(vector<int> &v){
    build(v,0,0,size);
  }

  void set(int i,int v,int x,int lx,int rx){
    if(rx-lx==1)
    {
      sums[x]=v;
      return;
    }
    int m=(lx+rx)/2;
    if(i<m)
      set(i,v,2*x+1,lx,m);
    else
      set(i,v,2*x+2,m,rx);
    sums[x]=sums[2*x+1]+sums[2*x+2];
  }

  void set(int i,int v){
    set(i,v,0,0,size);
  }
  int sum(int l,int r,int x,int lx,int rx)
  {
    if(lx>=r||rx<=l) return 0;
    if(lx>=l&&rx<=r) return sums[x];
    int m=(lx+rx)/2;
    return sum(l,r,2*x+1,lx,m)+sum(l,r,2*x+2,m,rx);

  }
  int sum(int l,int r)
  {
    return sum(l,r,0,0,size);

  }

};
void solve() {
  int n,m;
  cin>>n>>m;
  vector<int> a(n);
  for(int &i:a)
    cin>>i;
  seg s;
  s.init(n);
  debug(a);
  s.build(a);
  debug(s.sums);
  int l,r,o;
  while(m--)
  {
    cin>>o>>l>>r;
    if(o==1)
      s.set(l,r);
    else
      cout << s.sum(l,r)<<"\n";

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
