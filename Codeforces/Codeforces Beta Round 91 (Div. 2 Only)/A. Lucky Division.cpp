// ﷽
// Contest: Codeforces Beta Round 91 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/122/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 09 Mar 2024 12:20:38 AM EET
// Reading Time : 1
// Thinking Time : 3
// Coding Time : 6
// Comments : 
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

int cnt=0;
int arr[30]={};
void luck(string to){
  if (stoi(to) >1000) {
    return;
  }
  arr[cnt++]=stoi(to+"4");
  luck(to+"4");
  arr[cnt++]=stoi(to+"7");
  luck(to+"7");
}
void solve() {
  int x;
  cin>>x;

  luck("0");
  for (int &i  : arr) {
    if (!(x%i)) {
      cout<<"YES";
      return;
    
    }
  }
  cout<<"NO";

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
