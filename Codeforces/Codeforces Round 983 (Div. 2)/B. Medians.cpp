// ﷽
// Contest: Codeforces Round 983 (Div. 2)
//
// Judge: Codeforces
// URL: https://codeforces.com/contest/2032/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 01 Nov 2024 05:09:09 PM EET
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

#define MUTLI_CASE

bool check_answer(int n, const vector<int>& ans, int k) {
  vector<int> a(n);
  iota(all(a),1);
  int m = ans.size();
  if (m % 2 == 0) return false;

  vector<int> meds;

  for (int i = 0; i < m; ++i) {
    int l = ans[i] - 1;
    int r = (i == m - 1) ? n - 1 : ans[i + 1] - 2;

    vector<int> s(a.begin() + l, a.begin() + r + 1);

    if (s.size() % 2 == 0) return false;

    sort(s.begin(), s.end());
    int med = s[s.size() / 2];
    meds.push_back(med);
  }

  sort(meds.begin(), meds.end());
  int median_of_medians = meds[meds.size() / 2];

  return median_of_medians == k;
}
void solve() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  if (n == 1) {
    cout << "1\n1\n";
    return;
  }

  if (n == 3) {
    if (k == 2)
      cout << "1\n1\n";
    else
      cout << "-1\n";
    return;
  }
  if (k == (n + 1) / 2) {
    cout << "1\n1\n";
    return;
  }

  if (k == 1 || k == n) {
    cout << "-1\n";
    return;
  }
  int a = 1, b = k - 1, c = k + 2;

  if (!(k & 1)) {
    b = k;
    c = k + 1;
  }
  debug(check_answer(n,{a,b,c},k));

  cout << 3 << "\n";
  cout << a << " ";
  cout << b << " ";
  cout << c << "\n";
}
int32_t main() {
  /*freopen("whereami.in", "r", stdin);*/
  /*freopen("whereami.out", "w", stdout);*/
  fastio();
  int n = 1;

#ifdef MUTLI_CASE
  cin >> n;
#endif
  while (n--) solve();
  return 0;
}
