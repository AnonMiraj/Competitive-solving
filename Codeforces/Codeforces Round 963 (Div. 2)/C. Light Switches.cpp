// ﷽
// Contest: Codeforces Round 963 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1993/problem/c
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 04 Aug 2024 05:35:42 PM EEST
// Reading Time : 3
// Thinking Time :  6
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
pair<int, int> findCo(vector<pair<int, int>>& vp) {
    int ls = vp[0].first;
    int es = vp[0].second;

    for (auto& i : vp) {
        ls = max(es, i.first);
        es = min(es, i.second);
    }

    if (ls <= es) {
        return {ls, es};
    } else {
        return {-1, -1};
    }
}
pair<int,int > getOverlap(pair<int,int> p1, pair<int,int> p2) {
    if (p1.first <= p2.second && p2.first <= p1.second) {
        int st = max(p1.first, p2.first);
        int en = min(p1.second, p2.second);

        return {st, en};
    }
        return {-1, -1};
}
  int n,k;
int what(int i)
{
  if (i<k) {
    return i+k;
  }

    return i-k;

}
void solve() {
  cin>>n>>k;
  vector<int> a(n);
  for(auto &i  : a) {
    cin>>i;
  }

  int mi=*min_element(a.begin(),a.end());
  map<int,int>m;
  vector<pair<int,int>>vp;
  for(auto &i  : a) {
    i-=mi;
    m[i%(2*k)]++;
  }
  debug(n,k);
  debug(a);
  pair key={0,k-1};
  for(auto  [a,b]  : m) {
    int st=a,en=st+k-1;
    if(st>k)
    {
      st-=k*2;
      en-=k*2;
    }
    key = getOverlap(key,{st,en});

    
  }
  debug(m.size());
  debug(m);

  if (key.second==-1) {
    cout<<"-1\n";
  }
  else {
  int ma=*max_element(a.begin(),a.end());
    int st=ma%(2*k),en=st+k-1;
    if(st>k)
    {
      st-=k*2;
      en-=k*2;
    }
    cout<<ma+mi+abs(key.first-st)<<endl;
  }

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
