// ﷽
// Contest: Technocup 2017 - Elimination Round 2
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/729/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 28 May 2024 10:36:33 PM EEST
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

void solve() {
  int n;

  cin>>n;

  string s,ans="";
  cin >> s;
    string t ="";
    for (int i = 0; i < s.size();) {
        if (i + 2 < s.size() && s.substr(i, 3) == "ogo") {
            t += "***";
            int pos = i + 3;
            while (pos + 1 < s.size() && s.substr(pos, 2) == "go")
                pos += 2;
            i = pos;
        } else {
            t += s[i];
            i++;
        }
    }
    cout << t;
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
