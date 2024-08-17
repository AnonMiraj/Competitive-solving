// ﷽
// Contest: AtCoder Beginner Contest 169
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc169/tasks/abc169_d
// Memory Limit: 1024
// Time Limit: 2000
// Start: Fri 12 Jul 2024 07:00:38 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long

using namespace std;

int bin(int n)
{
  for(int i=0;i<=20;i++)
    if((i*i+i)/2>n)
      return i-1;



}
void solve() {
  int n;
  cin>>n;

  map<int, int> primes;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      primes[i]++; // i is a prime
      n /= i;
    }
  }

  if (n != 1) {
    primes[n]++;
  }
  debug(primes);
  int ans=0;
  for(auto [a,b]:primes)
    ans+=bin(b);
  cout<<ans;

}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
 kwhile (n--)
    solve();
  return 0;
}
