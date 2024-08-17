#include <bits/stdc++.h>

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long

using namespace std;
vector<vector<int>> freq;
vector<int> arr;
void tobitsfreq(int ind, int x) {

  for (int i = 0; i <= 21; i++) {
    if (x & (1 << i)) {
      freq[ind][i]++;
    }
    freq[ind][i] += freq[ind - 1][i];
  }
}

int n;
int inside(int l, int r) {
  int am = r - l + 1;
  int x = 0;

  for (int i = 0; i <= 21; i++) {
    if (freq[r][i] - freq[l - 1][i] == am) {
      x |= 1 << i;
    }
  }
  return x;
}
int outside(int l, int r) {
  if (l == 1 && r == n)
    return 0;
  return (l == 1 ? ((1 << 22) - 1) : inside(1, l - 1)) &
         (r == n ? ((1 << 22) - 1) : inside(r + 1, n));
}

void solve() {

  cin >> n;
  arr = vector<int>(n + 2);
  freq = vector<vector<int>>(n + 2, vector<int>(22, 0));
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    tobitsfreq(i, arr[i]);

  }

  tobitsfreq(n + 1, 0);
  int t;
  cin >> t;
  int l, r;
  while (t--) {
    cin >> l >> r;
    int a = inside(l, r);
    int b = outside(l, r);
    if (a == b)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  solve();
  return 0;
}
