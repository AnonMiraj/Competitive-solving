// ﷽
// Contest: Codeforces Round 716 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1514/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 12 Jul 2024 07:19:58 PM EEST
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

const int NMAX = 1000000;
bitset<NMAX / 2> bits;

void precalcseive() {
  bits.set();
  for (int i = 3; i / 2 < bits.size(); i = 2 * bits._Find_next(i / 2) + 1) {
    for (auto j = (int64_t)i * i / 2; j < bits.size(); j += i)
      bits[j] = 0;
  }
}
bool checkPrime(int n)
{
  if(n==2)
    return 1;
  if(n&1)
  return bits[n/2];
  return 0;

}
void solve() {
  precalcseive();
  int n ;

  cin>>n;
  if(n==4)
  {

    cout<<"1 \n1 ";
    return;
  }
  int tt=n;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      if(i!=2)
        bits[i/2]=0; // i is a prime
      n /= i;
    }
  }

  if (n != 1) {
    if(n!=2)
      bits[n/2]=0;
  }
  
  vector<int > ans;
  ans.push_back(1);
  if(tt&1)
  ans.push_back(2);



  for(int i=1;i<tt/2;i++)
  {
    if(bits[i])
    {
      int x=i*2+1;
      for(int j=x;j<tt;j*=x)
        ans.push_back(j);
    }



  }
  debug(checkPrime(21));
  sort(ans.begin(),ans.end());
  cout<<ans.size()<<"\n";
  for(auto i: ans)
    cout<<i<<" ";


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

