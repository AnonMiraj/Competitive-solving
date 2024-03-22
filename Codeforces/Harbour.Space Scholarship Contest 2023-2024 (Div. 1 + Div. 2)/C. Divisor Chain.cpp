// Contest: Harbour.Space Scholarship Contest 2023-2024 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1864/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 26 Aug 2023 03:28:04 PM UTC
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
  int x;
  cin>>x;
  bitset<32> BS(x);
  stack<int >v;
  stack<int> ans;
  for(int i=BS._Find_first();i< BS.size();i = BS._Find_next(i))
    v.push(i);
  int d=1;
while (d!=pow(2,v.top()+1))
{
  ans.push(d);
  d*=2;
}
v.pop();
while (!v.empty())
{
ans.push(pow(2,v.top())+ans.top());
v.pop();
}
cout<<ans.size()<<'\n';
    while (!ans.empty()) {
        std::cout << ans.top() << " "; // Print the top element
        ans.pop(); // Remove the top element
    }

    std::cout << std::endl;

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
