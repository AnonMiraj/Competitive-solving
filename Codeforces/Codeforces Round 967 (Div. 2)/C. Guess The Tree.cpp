// ﷽
// Contest: Codeforces Round 967 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2001/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 20 Aug 2024 05:35:24 PM EEST
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
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;


vector<vector<int>> adj;
vector<int> found;
vector<pair<int,int>>ans;
map<pair<int,int>,int>m;
void qu(int a,int b)
{

    if(adj[a][b])
      return;

  int q;

    if(!m[{a,b}])
    {

      cout<<"? "<<a<<" "<<b<<endl;
      cin>>q;
      m[{a,b}]=q;
    }
    else
    {
      q=m[{a,b}];
    }
  if(q==-1)
  {
    cout<<"WHYYYY! :("<<endl;
    exit(0);
  }
  if(q==a)
  {
  /*debug("dd ",a,b,q);*/
    adj[b][a]=1;
    adj[a][b]=1;
    ans.push_back({min(a,b),max(a,b)});
    return;
  }
  /*debug(a,b,q);*/

  /*debug(found);*/
  if(!adj[q][a])
    qu(a,q);



}

void solve() {
  int n;
  cin>>n;
  adj=vector<vector<int>>(n+1,vector<int>(n+1));
  /*found=vector<int>(n+1);*/
  ans.clear();
  m.clear();

  for(int i=1;i<=n;i++)
  {
    adj[i][i]=1;
  }
  for(int i=2;i<=n;i++)
  {
    if(!adj[1][i])
    qu(1,i);
  }
  debug(adj);
  debug(found);

  cout<<"! ";
  for (auto [a,b] : ans) {
      cout << a << " " << b << " ";
  }
  cout<<endl;


}
int32_t main() {

  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
