#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
#define int long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define frr(i, a, b) for (int i = a; i <= b; i++)
#define Print(a)                                                               \
  for (int i = 0; i < a.size(); i++) {                                         \
    cout << a[i] << " ";                                                       \
  }
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#ifdef ALGOAT
#include "debug.hpp"
#else

#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// for (int i = 0; i < n; i++) {
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  /*
  freopen("wtf.in", "r", stdin);
  freopen("wtf.out", "w", stdout);
  */
  int n, k;
  cin >> n >> k;
  int X = 30;
  char s[X][X];
  map<pair<int, int>, int> mp;
  int res = 0;
  int h = 5;
  for (int i = 0; i < X; i++) {
    for (int j = 0; j < X; j++) {
      s[i][j] = '.';
    }
  }
  for (int i = 0; i < k; i++) {
    int x, y;
    cin >> x >> y;
    s[x][y] = 'X';
  }
  int x = 0;
  for (int i = 0; i < X; i++) {
    for (int j = 0; j < X; j++) {
      if (s[i][j] == 'X') {
        if (s[i + 2][j + 1] == 'X') {
          mp[{i, j}]++;
        }
        if (s[i - 2][j + 1] == 'X') {
          mp[{i, j}]++;
        }
        if (s[i + 2][j - 1] == 'X') {
          mp[{i, j}]++;
        }
        if (s[i - 2][j - 1] == 'X') {
          mp[{i, j}]++;
        }
        if (s[i + 1][j + 2] == 'X') {
          mp[{i, j}]++;
        }
        if (s[i - 1][j + 2] == 'X') {
          mp[{i, j}]++;
        }
        if (s[i + 1][j - 2] == 'X') {
          mp[{i, j}]++;
        }
        if (s[i - 1][j - 2] == 'X') {
          mp[{i, j}]++;
        }
      }
    }
  }

  int cnt = 0;
  int v = -1, i, j;

  for (auto x : mp) {
    if (x.S > v) {
      v = x.S;
      i = x.F.F;
      j = x.F.S;
    }
  }

  debug(mp);
  while (v > 0) {
    mp[{i, j}] = 0;
    mp[{i + 1, j + 2}]--;
    mp[{i + 1, j - 2}]--;
    mp[{i - 1, j + 2}]--;
    mp[{i - 1, j - 2}]--;
    mp[{i + 2, j + 1}]--;
    mp[{i + 2, j - 1}]--;
    mp[{i - 2, j + 1}]--;
    mp[{i - 2, j - 1}]--;
    cnt++;
    v = -1;
    for (auto x : mp) {
      if (x.S > v) {
        v = x.S;
        i = x.F.F;
        j = x.F.S;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
