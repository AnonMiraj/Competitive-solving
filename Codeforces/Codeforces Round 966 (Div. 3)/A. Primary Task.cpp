// ﷽
// Contest: Codeforces Round 966 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2000/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 13 Aug 2024 05:41:49 PM EEST
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

void solve() {
  string s;
  cin>>s;
  if(s[0]=='1'&&s[1]=='0'&&s[2]!='0')
  {
    string tt=s;
    tt[0]='0';
    if(stoi(tt)>1)
    {
      debug(tt);
      cout<<"YES\n";

      return;
    }


  }

      cout<<"NO\n";


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
