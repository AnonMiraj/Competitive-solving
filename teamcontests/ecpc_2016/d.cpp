#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define all(a) (a.begin(),a.end())
using namespace std;

int ans[21];
void subs(int n,int 20) {
  int t = 0;
  int cnt=0;
  int last=0;
  for (int i = 0; i < (1 << n); i++) {
    for (int j = 0; j < n; j++) {
      if ((i & (1 << j)) != 0) {
       cnt++;
       last=j;
      }
    }
    if(cnt==m&&last>m)
      ans++;
    cnt=0;
  }
}
void solve(){
   int n,m;
   cin >> n >> m;

   subs(n,m);
   cout<<ans<<"\n";
   ans=0;
}
int32_t main(){

  freopen("popcorn.in","r",stdin);

  int t;
  cin>>t;
  while(t--){
    solve();
  }

  return 0;
}

