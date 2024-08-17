// ﷽
// Contest: To ECPC '24 - Contest #3 (Individual)
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/632920#problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 07 Jun 2024 05:36:05 PM EEST
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

  string s;
int dothemath(const string& ex) {
    int res = 0;
    int start = 0;
    size_t pos = ex.find('+');

    while (pos != string::npos) {
        res += stoi(ex.substr(start, pos - start));
        start = pos + 1;
        pos = ex.find('+', start);
    }

    res += stoll(ex.substr(start));

    return res;
}
vector<string> v;

void f(string s, int ind) {
    if (ind == s.length() - 1) {
        v.push_back(s);
        return;
    }

    string sp = s;
    sp.insert(ind + 1, "+");
    f(sp, ind + 2); 

    f(s, ind + 1);
}
void solve() {
  cin>>s;
  int ans=0;

   
  f(s,0);

  for(string i:v)
  {
    ans+=dothemath(i);
  }
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
