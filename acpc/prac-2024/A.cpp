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

void solve() {
  int a,b;

  cin>>a>>b;
  map<int ,int >p;
  int n=a;

  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      p[i]=1;
      n /= i;
    }
  }
 
  if (n != 1) {
    p[n]=1;
  }

  n=b;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      if(p[i])
      {
        cout<<"YES\n";
        return;
      }
      n /= i;
    }
  }
 

  if (n != 1) {
     if(p[n])
      {
        cout<<"YES\n";
        return;
      }
  }
        cout<<"NO\n";
  
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
