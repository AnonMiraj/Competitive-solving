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
  int l=1,r=1e9+10;

  char c;

  while(l<r)
  {
    cout<<(l+r)/2<<endl;
    cout.flush();
    cin>>c;
    if(c=='<')
      r=(l+r)/(2);

    if(c=='>')
      l=(l+r)/(2)+1;

    if(c=='=')
    {

    cout<<"! "<<(l+r)/2<<endl;
    cout.flush();
    return;

    }



  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  while (n--)
    solve();
  return 0;
}


