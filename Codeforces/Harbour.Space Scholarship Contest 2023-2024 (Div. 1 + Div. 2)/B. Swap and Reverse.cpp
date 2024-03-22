// Contest: Harbour.Space Scholarship Contest 2023-2024 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1864/problem/B#
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 26 Aug 2023 03:59:25 PM UTC
//
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <climits>
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
  int n,d;
  cin>>n>>d;
  string input;
  cin>>input;
if (!(d&1))
{
  sort(input.begin(),input.end());
  
  cout<<input<<endl;
  return;
}
    std::string even_chars, odd_chars;
    for (int i = 0; i < input.length(); i++) {
        if (i % 2 == 0) {
            even_chars += input[i];
        } else {
            odd_chars += input[i];
        }
    }

    std::sort(even_chars.begin(), even_chars.end());
    std::sort(odd_chars.begin(), odd_chars.end());

    for (int i = 0, j = 0, k = 0; i < input.length(); i++) {
        if (i % 2 == 0) {
            input[i] = even_chars[j++];
        } else {
            input[i] = odd_chars[k++];
        }
    }
  // sort(s.begin(),s.end());

  cout<<input<<endl;
  
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin>>n;
  while (n--)
    solve();
  return 0;
}
