// URL: https://vjudge.net/problem/SPOJ-TRICOUNT
#include <bits/stdc++.h>
using namespace std;
int32_t main() {
long long pre[(int)(1e6 + 10)] = {};
  pre[0] = 0;
  for (int i = 1; i < (1e6 + 10); i++) {
    pre[i] = (2LL * i - 1LL);
    pre[i] += pre[i - 1];
  }
  int n = 1;
  cin >> n;
  while (n--) {
    int n;
    cin >> n;
    cout << pre[n] + pre[n - 1] << "\n";
  }
   return 0;
}
