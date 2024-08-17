// ﷽
// Contest: Codeforces Global Round 25
// Judge: Codeforces
// URL: https://codeforces.com/contest/1951/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 06 Apr 2024 07:02:38 PM EET
// Reading Time :
// Thinking Time :
// Coding Time :
// Comments :
#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
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

bool isPalindrome(const std::string &s) {
  int left = 0;
  int right = s.length() - 1;
  if (right==0) {
    return false;
  }
  while (left < right) {
    if (s[left] == s[right]) {
      return false;
    }
    left++;
    right--;
  }

  return true;
}
void solve() {
  string s;
  cin >> s;

  if (isPalindrome(s)) {
    cout << "YES\n";
    cout << 1 << '\n';
    cout << s << '\n';
    return;
  }
  int p1 = 0, p2 = s.size();

  string s1, s2;
  while (p1 != p2) {
    s1 = s.substr(0, p1 + 1);
    s2 = s.substr(p1+1, s.size());
    if (isPalindrome(s1) && isPalindrome(s2)) {
      cout << "YES\n";
      cout << 2 << '\n';
      cout << s1 << " " << s2 << '\n';
      return;
    }
    p1++;
  }
  cout << "NO\n";
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
