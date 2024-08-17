#include<bits/stdc++.h>

#define endl '\n'
#define int long long
#define all(a) (a).begin(),(a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define vi vector<int>
using namespace std;

int n, m, a, b;

int32_t main() {
  int t; cin >> t;
  while (t--) {
    int ans=0;
    cin >> n >> m >> a >> b;
    while(true){
      int tmp=n/2;
      int coins=(n-tmp)*b;
      if(n==m)break;
      if(a<=coins&&tmp>=m){
        n/=2;
        ans+=a;
      }else{
        if(tmp<m){
          ans+=(n-m)*b;break;
        }
        ans+=(n-tmp)*b;
        n-=n-tmp;
      }
    }
    cout << ans << endl;
  }
    return 0;
}
