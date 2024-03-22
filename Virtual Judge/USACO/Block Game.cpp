// ﷽
// Contest: USACO
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/USACO-664
// Memory Limit: 1024
// Time Limit: 1000
// Start: Sat 30 Sep 2023 06:35:27 AM UTC
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
  int freq1[26]={};
  int freq2[26]={};
  int freq3[26]={};
  int n ; cin>>n;
  string s[n*2];
  for (int i = 0;i<n*2;i++)
  {
    cin>>s[i];
  }
  
  for (int i = 0;i<n*2;i++)
  {
    freq1[s[i][0]-'a']++;
    freq2[s[i][1]-'a']++;
    freq3[s[i][2]-'a']++;
  }
  for (int i = 0; i<26 ; i++) {
    cout<<      min(freq1[i],(int)3)+ min(freq2[i],(int)3) +min(freq3[i],(int)3)<<'\n';
  
  }

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
