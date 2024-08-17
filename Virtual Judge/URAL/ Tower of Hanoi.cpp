// ﷽
// Contest: URAL
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/URAL-1054
// Memory Limit: 64
// Time Limit: 1000
// Start: Tue 23 Apr 2024 10:28:42 AM EET
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
using namespace std;
vector<int> d(33, 1);
vector<int> td(33, 1);
int cnt=0;
void Hanoi(int N, int From, int To_, int Temp) {
  if (N) {

    Hanoi(N - 1, From, Temp, To_);
    // cout << N << " " << From << " " << To_ << "\n";

    d[N] = To_;
    cnt++;
    if (td==d) {
      cout<<cnt;
      exit(0);
      
    }
    Hanoi(N - 1, Temp, To_, From);
  }
}
void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> td[i];
  }
    if (td==d) {
      cout<<cnt;
      exit(0);
      
    }
  Hanoi(n, 1, 2, 3);
  cout<<-1;
}
int main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
