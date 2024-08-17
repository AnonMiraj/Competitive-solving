// ﷽
// Contest: Codeforces Round 945 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1973/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 17 May 2024 06:19:48 PM EEST
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
int n;
vector<int> arr;
vector<int> pref;
void addbits(int freq[], int num) {

  int x = 1;
  for (int i = 0; i < 20; i++) {
    if ((x & num) == x)
      freq[i]++;
    x = (x << 1LL);
  }
}
int rembits(int freq[], int num) {

  int x = 1;
  int flag = 0;
  for (int i = 0; i < 20; i++) {
    if ((x & num) == x) {
      freq[i]--;
    }

    if (freq[i])
       flag |= 1LL<<i;
    x = (x << 1LL);
  }
  return flag;
}
bool f(int k) {
  int prev = 0;
  int cur = 0;
  int freq[30] = {};
  for (int j = 0; j <= k; j++) {
    prev |= arr[j];
    addbits(freq, arr[j]);
  }
  cur = prev;
  for (int i = 1; i < n - k; i++) {
    addbits(freq, arr[i + k]);
    cur = rembits(freq, arr[i -1]);
    debug_itr(freq,freq+20);
    debug(cur, prev);
    if (cur != prev)
      return 0;
    prev = cur;
  }

  return true;
}
void solve() {
  cin >> n;
  arr = vector<int>(n);
  pref = vector<int>(n + 1);
  int x = 1;
  for (auto &i : arr) {
    cin >> i;
    pref[x] = i;
    pref[x] |= pref[x - 1];
    x++;
  }

  int l = 0, r = n - 1;
  int mid;
  while (l < r) {
    mid = (l + r) / 2;
    if (f(mid))
      r = mid;
    else
      l = mid + 1;
  }
  if (n == 1) {
    cout << 1 << "\n";

    return;
  }
  cout << l + 1 << "\n";
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
