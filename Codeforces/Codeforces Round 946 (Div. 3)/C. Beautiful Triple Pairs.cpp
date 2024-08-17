// ﷽
// Contest: Codeforces Round 946 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1974/problem/C
// Memory Limit: 256
// Time Limit: 4000
// Start: Mon 20 May 2024 06:15:23 PM EEST
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
    cin >> i;

    map<array<int, 3>, map<int, int>> m;
    for (int i = 0; i + 3 <= n; i++) {
        m[{0, a[i + 1], a[i + 2]}][a[i]]++;
        m[{a[i], 0, a[i + 2]}][a[i + 1]]++;
        m[{a[i], a[i + 1], 0}][a[i + 2]]++;
    }

    int sol = 0;
    for (auto& [triple, mp] : m) {
        int sum = 0;
        for (auto& [k, freq] : mp) {
            sol += sum * freq;
            sum += freq;
        }
    }
    debug(m);

    cout << sol << '\n';
}
void solve1() {
  int n;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  map<tuple<int, int, int>, int> fre;
  map<tuple<int, int, int>, int> dub;
  int ans = 0;
  for (int i = 0; i < n - 2; i++) {

    if (dub[make_tuple(s[i], s[i + 1], s[i + 2])])
    {
      ans-=3*dub[make_tuple(s[i], s[i + 1], s[i + 2])];
    }
    dub[make_tuple(s[i], s[i + 1], s[i + 2])]++;

    if (fre[make_tuple(-1, s[i + 1], s[i + 2])] >= 1)
      ans+=fre[make_tuple(-1, s[i + 1], s[i + 2])];
    if (fre[make_tuple(s[i], -1, s[i + 2])] >= 1)
      ans+=fre[make_tuple(s[i], -1, s[i + 2])];

    if (fre[make_tuple(s[i], s[i + 1], -1)] >= 1)
      ans+=fre[make_tuple(s[i], s[i + 1], -1)];

    fre[make_tuple(-1, s[i + 1], s[i + 2])]++;
    fre[make_tuple(s[i], -1, s[i + 2])]++;
    fre[make_tuple(s[i], s[i + 1], -1)]++;
  }
  debug(fre);
  cout << ans << "\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
