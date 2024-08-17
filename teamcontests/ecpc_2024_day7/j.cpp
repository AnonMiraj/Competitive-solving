#include<bits/stdc++.h>

#define endl '\n'
#define int long long
#define all(a) (a).begin(),(a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define vi vector<int>
using namespace std;
void file(){
  freopen("t.in","r",stdin);
  /*freopen("outputt.in","w",stdout);*/
}
int f(string a,string q)
{
  for(int i=0;i<5;i++)
  {
    if(q[i]!='?'&& q[i]!=a[i])
      return 0;


  }
  return 1;
}
void solve(){
  int n,q;
  cin>>n>>q;
  vector<string> arr(n),aq(q);
  vector<vector<string>> ans(q);
  for(auto &i:arr)
    cin>>i;

  for(auto &i:aq)
    cin>>i;
  for(int i = 0;i<q;i++)
  {

    for(int j = 0;j<n;j++)
    {
      if(f(arr[j],aq[i]))
        ans[i].pb(arr[j]);

    }

  }

  for(auto i: ans)
  {
    sort(all(i));
    for(auto j: i)
      cout<<j<<endl;


  }
}
int32_t main(){
  /*file();*/
  int t=1;
  //cin>>t;
  while(t--){
    solve();
  }


  return 0;
}
