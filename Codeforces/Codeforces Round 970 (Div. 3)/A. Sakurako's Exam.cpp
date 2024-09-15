// ﷽
// Contest: Codeforces Round 970 (Div. 3)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2008/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 01 Sep 2024 05:35:48 PM EEST
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

using namespace std;

bool f (int i , int s , vector<int> & v)
{
  if (i == v.size()) {
        return s == 0;
    }
  return f(i + 1, s + v[i], v) || f(i + 1, s - v[i], v);


}
void solve() {
  int a, b;
  cin >> a >> b;

  int n = a + b;
  vector<int> v(n, 1);
  fill(v.begin() + a, v.end(), 2);

  if(f(0,0,v))
  cout << "YES\n";
  else
  cout << "NO\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;
  cin >> n;
  while (n--) solve();
  return 0;
}
