// Problem: B. Olya and Game with Arrays
// Contest: Codeforces Round 892 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1859/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 12 Aug 2023 03:29:03 PM UTC
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
int INT_max = 2147483647;
int INT_min = -2147483647;
using namespace std;
struct val {
  int s, mi, mid;
};
void solve() {
  int n, x;
  cin >> n;
  int minn,mins;
  int sum=0;
  for (int j = 0; j < n; j++) {
      int smallest = INT_max;
  int secondSmallest = INT_max;

    cin >> x;
    for (int i = 0; i < x; ++i) {
      int temp;
      cin >> temp;
      if (temp < smallest) {
        
        secondSmallest = smallest;
        smallest = temp;
      } else if (temp < secondSmallest && temp != smallest) {
        secondSmallest = temp;
      }

    }
    sum+=secondSmallest;
    if(minn==smallest){
     if (mins<=secondSmallest) {
     mins=secondSmallest;
     } 
    }
    if(minn>smallest)
    {
      minn=smallest;
      mins=secondSmallest;
    }
    
  }
  cout<<sum+minn-mins<<'\n';

}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
