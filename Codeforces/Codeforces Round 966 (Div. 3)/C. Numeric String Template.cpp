// ﷽
// Contest: Codeforces Round 966 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2000/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 13 Aug 2024 05:59:28 PM EEST
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
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define F first
#define S second
#define vi vector<int>

using namespace std;

vi v;
int dis;
  int n;
void ss(){

    string s;
    cin>>s;
    if(s.size()!=n)
    {
      cout<<"NO\n";
      return;
    }

    map<int,char>mss;
    map<char,int>msi;

      debug();
    for(int i=0;i<n;i++)
    {
      if(mss[v[i]]==0)
      {
        mss[v[i]]=s[i];
      }

      if(msi.find(s[i])==msi.end())
      {
        msi[s[i]]=v[i];
      }
      debug(mss[v[i]],v[i]);
      debug(msi[s[i]],s[i]);
      if(mss[v[i]]!=s[i]||msi[s[i]]!=v[i])
      {
        cout<<"NO\n";
        return;
      }

    }


        cout<<"YES\n";

}
void solve() {
  cin>>n;
  
  v=vi(n);
  map<int,int>m;
  for(auto & i :v)
  {

    cin>>i;
    m[i];
  }
  dis=m.size();
  debug(v);
  int q;
    cin>>q;
  while(q--)
  {
    ss();
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
