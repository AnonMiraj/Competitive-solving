// Contest: Codeforces Round 479 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/977/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 20 Aug 2023 04:35:27 AM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
      int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    map<string, int> counts;
 
    for (int i = 0; i < n - 1; i++) {
        string two_gram = s.substr(i, 2);
        counts[two_gram]++;
    }
 
    int max_count = 0;
    string max_two_gram;
 
    for (auto it = counts.begin(); it != counts.end(); it++) {
        if (it->second > max_count) {
            max_count = it->second;
            max_two_gram = it->first;
        }
    }
 
    cout << max_two_gram << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
