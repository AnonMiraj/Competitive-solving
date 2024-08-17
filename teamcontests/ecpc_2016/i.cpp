
#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define all(a) (a.begin(),a.end())
using namespace std;
void solve(){
  int n, m; cin >> n >> m;
  int res = 0;
  for(int i = 0; i < n; i++) {
    int xi, yi, ri; cin >> xi >> yi >> ri;
    if((abs(yi)+ri <= m) && (xi-ri)>=0) {
      res++;
      cout << i << " <-- \n";
    }
  }
  cout << res << endl;
}
int32_t main() {

  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  int t;
  cin>>t;
  while(t--) {
    solve();
  }


  return 0;
}

