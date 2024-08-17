// ﷽
// Contest: Codeforces Global Round 26
// Judge: Codeforces
// URL: https://codeforces.com/contest/1984/problem/C1
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 09 Jun 2024 06:08:12 PM EEST
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
#define ll long long

using namespace std;

int n;
vector<int> umm;
map<pair<int, int>, int> memo;

int dp(int i, int sum) {

    if (i == umm.size()) {
        return  sum ;
    }

    if (memo.find({i, sum}) != memo.end()) {
        return memo[{i, sum}];
    }


    memo[{i, 1}] = max(dp(i + 1, sum + umm[i]) ,dp(i + 1, abs(sum + umm[i]))) ;
    memo[{i, 0}] = min(dp(i + 1, sum + umm[i]) ,dp(i + 1, abs(sum + umm[i]))) ;
    return memo[{i,1}];
}
int solve1(int orig_n, vector<int> &arr) {
  n = orig_n;
  int c = 0;
  int t;

  umm.clear();
  memo.clear();
  umm.push_back(arr[0]);
  for (int i = 1; i < n; i++) {
    if (umm.back() < 0 && arr[i] < 0)
      umm.back() += arr[i];
    else if (umm.back() >= 0 && arr[i] >= 0)
      umm.back() += arr[i];
    else
      umm.push_back(arr[i]);
  }
  return dp(0, 0);
}
int solve2(int orig_n, vector<int> &arr) {
  int c = 0;
  vector<int> ummm;
  ummm.push_back(arr[0]);
  for (int i = 1; i < arr.size(); i++) {
    if (ummm.back() <= 0 && arr[i] <= 0)
      ummm.back() += arr[i];
    else if (ummm.back() >= 0 && arr[i] >= 0)
      ummm.back() += arr[i];
    else
      ummm.push_back(arr[i]);
  }

  for (int i = (int)ummm.size() - 2; i > 0; i--) {
    if ((ummm[i] > 0 && ummm[i + 1] < 0) && ummm[i] <= abs(ummm[i + 1])) {
      ummm[i - 1] += ummm[i];
      ummm[i - 1] += ummm[i + 1];
      ummm[i] = 0;
      ummm[i + 1] = 0;
    }
}
  debug(ummm);
  for (int i = 0; i < ummm.size(); i++) {
    c = max(c + ummm[i], abs(c + ummm[i]));
  }

  return c;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--) {
    int k;
    cin >> k;

    vector<int> v(k);
    for (auto &i : v)
      cin >> i;
    cout << solve1(k, v) << '\n';
  }
  return 0;

  while (1) {
    srand(time(0));

    int n = 30 ;
    vector<int> v;

    for (int j = 0; j < n; ++j) {
      int a = rand() % 21 - 10;
      v.push_back(a);
    }

    int a1, a2;
    a1 = solve1(n, v);
    a2 = solve2(n, v);
    if (a1 != a2) {
      debug(a1, a2);
      debug(v);

    for (int j = 0; j < n; ++j) {
      cerr<<v[j]<<" ";
    }
      break;
    }
  }
  return 0;
}
