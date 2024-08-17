#include <bits/stdc++.h>

#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define vi vector<int>


#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

using namespace std;
void file() {
  /*freopen("i.in","r",stdin);*/
  /*freopen("outputt.in","w",stdout);*/
}
int divisors[int(1e5 + 100)];
vector<vector<int>> divs;
void div() {
    const int n = 1e5+10;

    divs=vector<vector<int>>(n);
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j += i) {
            divs[j].push_back(i);
        }
    }
}
void solve() {
    int n, k, m;
    cin >> n >> k;
    m = n - k;
    int t;
    
    for (int i = 0; i < n; i++)
    {
      cin>>t;
      for(auto fa:divs[t])
        divisors[fa]++;
    }

    int ans=-1;
    for (int i = 1e5+10; i > 0; i--)
    {

      if(divisors[i]>=m)
      {
        ans=i;
        break;

      }
    }
    cout<<ans;
}
int32_t main() {
  file();
  div();

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  /*cin>>t;*/
  while (t--) {
    solve();
  }

  return 0;
}
