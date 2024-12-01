// ﷽
// Contest: VK Cup 2012 Qualification Round 1
// Judge: Codeforces
// URL: https://codeforces.com/contest/158/problem/B
// Memory Limit: 256
// Time Limit: 3000
// Start: Tue 05 Mar 2024 04:19:42 AM EET
// Submission: https://codeforces.com/contest/158/submission/249674074
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
  int n;
  cin>>n;
  int arr[5]={};
  int k;
  for (int i=0 ; i<n ; i++) {
    cin>>k;
    arr[k]++;
  }
 
	int ans = arr[4];
 
 
	while (arr[3]) {
		ans++;
		arr[3]--;
		if (arr[1]) arr[1]--;
	}
 
	ans += ( arr[2] + (arr[1] + 1) / 2+ 1) / 2;
  cout<<ans;
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
