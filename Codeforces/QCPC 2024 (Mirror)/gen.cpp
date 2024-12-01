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

using namespace std;

mt19937 rng = mt19937(random_device()());

void seed(int s) { rng = mt19937(s); }

int rand_int(int x, int y) { return uniform_int_distribution<int>(x, y)(rng); }
void solve() {
  int t = 100;
  cout<<t<<"\n";
  for (int i = 0; i < 100; i++) {
    cout << rand_int(10, 1000000000) << "\n";
  }
}

int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--) solve();
  return 0;
}
