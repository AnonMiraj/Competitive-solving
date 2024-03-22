// ﷽
// Contest: SPOJ
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/SPOJ-EASYMATH
// Memory Limit: 1536
// Time Limit: 100
// Start: Thu 25 Jan 2024 01:56:41 PM UTC
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

int lcm(int a, int b) {
    return  __gcd(a, b);
}

// Function to calculate LCM for every pair of elements in the array
void findPairLCM(int arr[], int n) {
    cout << "Pairwise LCMs:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int result = lcm(arr[i], arr[j]);
            cout << "LCM of " << arr[i] << " and " << arr[j] << " is " << result << endl;
        }
    }
}
void solve() {
  int n,m,a,d;
  cin>>n>>m>>a>>d;
  int x=m-n;
  int arr[5];
  for (size_t i = 0; i < 5; i++) {
    // cout<<x/(a+i*d)<<" ";
    arr[i]=a+i*d;
    
  }
  findPairLCM(arr, 5);
  cout<<endl;


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
